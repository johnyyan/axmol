//
//  SkeletonDataCache.cpp
//  cocos2d_lua_bindings
//
//  Created by john on 3/23/18.
//

#include <iostream>
#include <sstream>
#include "SkeletonDataCache.hpp"
#include "SkeletonExtend.hpp"
#include "platform/FileUtils.h"

USING_NS_CC;

bool endswith(const std::string& str, const std::string& end)
{
    size_t srclen = str.size();
    size_t endlen = end.size();
    if(srclen >= endlen)
    {
        std::string temp = str.substr(srclen - endlen, endlen);
        if(temp == end)
            return true;
    }
    
    return false;
}

std::string getPathDirectory(std::string filePath)
{
    std::string ret;
    
    std::size_t found = filePath.rfind("/");
    
    if (found != std::string::npos)
        ret = filePath.substr(0, found + 1);

    return ret;
}

std::vector<std::string> parseAtlasImages(std::string atlasFilePath)
{
    std::string dir = getPathDirectory(atlasFilePath);
    
    std::vector<std::string> ret;
    
	std::string atlasStr = FileUtils::getInstance()->getStringFromFile(atlasFilePath);
	std::stringstream fin(atlasStr);

    std::string line;
    while ( fin >> line )
    {
        if (endswith(line, ".png")){
            ret.push_back(dir + line);
        }
    }

    return ret;
}

SkeletonDataCache* SkeletonDataCache::m_instance = nullptr;

SkeletonDataCache* SkeletonDataCache::getInstance() {
    if (!m_instance) {
        m_instance = new SkeletonDataCache();
    }
    return m_instance;
}

// 添加
bool SkeletonDataCache::addItem(const std::string &key, spSkeletonData *data, spAtlas* atlas, spAttachmentLoader* loader){
    // 如果已经存在
    SkeletonDataItem* findItem = m_caches.at(key);
    if (nullptr != findItem){
        return false;
    }

    SkeletonDataItem *tmpItem = new SkeletonDataItem();
    tmpItem->autorelease();
    
    tmpItem->data = data;
    tmpItem->atlas = atlas;
    tmpItem->attachmentLoader = loader;
    tmpItem->spineName = key;
    
    m_caches.insert(key, tmpItem);
    
    return true;
}

// 获取
SkeletonDataItem * SkeletonDataCache::findItem(const std::string &key)
{
    SkeletonDataItem* tmpItem = m_caches.at(key);
    
    if (nullptr != tmpItem){
        return tmpItem;
    }
    
    return nullptr;
}

// 删除
bool SkeletonDataCache::delItem(const std::string &key)
{
    SkeletonDataItem* tmpItem = m_caches.at(key);
    
    if (nullptr != tmpItem){
        m_caches.erase(key);
        return true;
    }
    
    return false;
}

// 清理缓存
void SkeletonDataCache::clearCaches()
{
    m_caches.clear();
}

struct SkeletonDataCache::AsyncStruct
{
public:
    AsyncStruct( const std::string& dataFile, const std::string atlasFile, const float scale, const std::function<void(bool success)>& f)
    : dataFile(dataFile), atlasFile(atlasFile), scale(scale), callback(f), loadSuccess(false)
    {}
    
    std::string dataFile;
    std::string atlasFile;
    float scale;
    std::function<void(bool success)> callback;
    std::vector<std::string> images;
    int imagesCount;
    bool loadSuccess;
};

//加载函数
void SkeletonDataCache::loadSpine()
{
    AsyncStruct *asyncStruct = nullptr;
    std::mutex signalMutex;
    std::unique_lock<std::mutex> signal(signalMutex);
    while (!_needQuit)
    {
        // pop an AsyncStruct from request queue
        _requestMutex.lock();
        if (_requestQueue.empty())
        {
            asyncStruct = nullptr;
        }
        else
        {
            asyncStruct = _requestQueue.front();
            _requestQueue.pop_front();
        }
        _requestMutex.unlock();
        
        if (nullptr == asyncStruct) {
            _sleepCondition.wait(signal);
            continue;
        }
        
        // 加载图片
        for (int i = 0; i < asyncStruct->images.size(); i++) {
            Director::getInstance()->getTextureCache()->addImageAsync(asyncStruct->images[i], [=](Texture2D* texture){
                asyncStruct->imagesCount--;
                if (asyncStruct->imagesCount == 0){
                    // 在cocos线程中回调
                    auto director = Director::getInstance();
                    Scheduler *sched = director->getScheduler();
                    sched->performFunctionInCocosThread( [this, asyncStruct](){
                        // 判断后缀
                        if (endswith(asyncStruct->dataFile, ".json")){
                            asyncStruct->loadSuccess = SkeletonExtend::loadJsonData(asyncStruct->dataFile, asyncStruct->atlasFile, asyncStruct->scale);
                        }else{
                            asyncStruct->loadSuccess = SkeletonExtend::loadBinaryData(asyncStruct->dataFile, asyncStruct->atlasFile, asyncStruct->scale);
                        }
                        
                        // push the asyncStruct to response queue
                        _responseMutex.lock();
                        _responseQueue.push_back(asyncStruct);
                        _responseMutex.unlock();
                    });
                }
            });
        }
    }
}

// 异步加载
void SkeletonDataCache::preloadAsync(const std::string & skeletonDataFile, const std::string& atlasFile, float scale, const std::function<void(bool)>& callback)
{
    // 判断文件是否存在
    std::string dataFullpath = FileUtils::getInstance()->fullPathForFilename(skeletonDataFile);
    std::string atlasFullpath = FileUtils::getInstance()->fullPathForFilename(atlasFile);

    if (dataFullpath.empty() || !FileUtils::getInstance()->isFileExist(dataFullpath) || atlasFullpath.empty() || !FileUtils::getInstance()->isFileExist(atlasFullpath)) {
        if (callback) callback(false);
        return;
    }
    
    // 判断缓存中是否存在
    if (findItem(skeletonDataFile)){
        if (callback) callback(true);
        return;
    }

    // lazy init
    if (_loadingThread == nullptr)
    {
        // create a new thread to load images
        _loadingThread = new (std::nothrow) std::thread(&SkeletonDataCache::loadSpine, this);
        _needQuit = false;
    }

    if (0 == _asyncRefCount)
    {
        Director::getInstance()->getScheduler()->schedule(CC_SCHEDULE_SELECTOR(SkeletonDataCache::addSpineAsyncCallBack), this, 0, false);
    }
    
    ++_asyncRefCount;

    // generate async struct
    AsyncStruct *data = new (std::nothrow) AsyncStruct(skeletonDataFile, atlasFile, scale, callback);
    // parse all image files
    data->images = parseAtlasImages(atlasFullpath);
    data->imagesCount = (int)data->images.size();
    
    // add async struct into queue
    _asyncStructQueue.push_back(data);
    _requestMutex.lock();
    _requestQueue.push_back(data);
    _requestMutex.unlock();
    
    _sleepCondition.notify_one();
}

void SkeletonDataCache::addSpineAsyncCallBack(float /*dt*/)
{
    AsyncStruct *asyncStruct = nullptr;
    while (true)
    {
        // pop an AsyncStruct from response queue
        _responseMutex.lock();
        if (_responseQueue.empty())
        {
            asyncStruct = nullptr;
        }
        else
        {
            asyncStruct = _responseQueue.front();
            _responseQueue.pop_front();
            
            // the asyncStruct's sequence order in _asyncStructQueue must equal to the order in _responseQueue
//            CC_ASSERT(asyncStruct == _asyncStructQueue.front());
            auto it = std::find(_asyncStructQueue.begin(), _asyncStructQueue.end(), asyncStruct);
//            _asyncStructQueue.pop_front();
            _asyncStructQueue.erase(it);
        }
        _responseMutex.unlock();
        
        if (nullptr == asyncStruct) {
            break;
        }
        
        // call callback function
        if (asyncStruct->callback)
        {
            (asyncStruct->callback)(asyncStruct->loadSuccess);
        }
        
        // release the asyncStruct
        delete asyncStruct;
        --_asyncRefCount;
    }
    
    if (0 == _asyncRefCount)
    {
        Director::getInstance()->getScheduler()->unschedule(CC_SCHEDULE_SELECTOR(SkeletonDataCache::addSpineAsyncCallBack), this);
    }
}
