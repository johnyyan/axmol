//
//  SkeletonDataCache.hpp
//  cocos2d_lua_bindings
//
//  Created by john on 3/23/18.
//

#ifndef SkeletonDataCache_hpp
#define SkeletonDataCache_hpp

#include <stdio.h>
#include "cocos2d.h"
#include <spine/SkeletonData.h>
#include <spine/Cocos2dAttachmentLoader.h>


typedef struct SkeletonDataItem : public cocos2d::Ref{
    spSkeletonData *data;
    spAtlas* atlas;
    spAttachmentLoader* attachmentLoader;
    std::string spineName;
    
    SkeletonDataItem(){
        data = nullptr;
        atlas = nullptr;
        attachmentLoader = nullptr;
        spineName = "";
    }
    
    // 析构函数
    ~SkeletonDataItem(){
        if (data != nullptr){
            spSkeletonData_dispose(data);
        }
        
        if (atlas != nullptr){
            spAtlas_dispose(atlas);
        }

        if (attachmentLoader != nullptr){
            spAttachmentLoader_dispose(attachmentLoader);
        }
    }
}SkeletonDataItem;

class SkeletonDataCache : public cocos2d::Ref{
private:
    static SkeletonDataCache* m_instance;

    // 缓存骨骼数据
    cocos2d::Map<std::string, SkeletonDataItem*> m_caches;
public:
    static SkeletonDataCache* getInstance();
    
    // 异步加载
    void preloadAsync(const std::string & skeletonDataFile, const std::string& atlasFile, float scale = 1, const std::function<void(bool)>& callback = nullptr);

    // 添加
    bool addItem(const std::string &key, spSkeletonData *data, spAtlas* atlas, spAttachmentLoader* loader);
    
    // 获取
    SkeletonDataItem *findItem(const std::string &key);
    
    // 删除
    bool delItem(const std::string &key);

    // 清理缓存
    void clearCaches();
    
private:
    void loadSpine();
    
    void addSpineAsyncCallBack(float /*dt*/);
protected:
    struct AsyncStruct;
    
    std::thread* _loadingThread;
    
    std::deque<AsyncStruct*> _asyncStructQueue;
    std::deque<AsyncStruct*> _requestQueue;
    std::deque<AsyncStruct*> _responseQueue;

    std::mutex _requestMutex;
    std::mutex _responseMutex;
    
    std::condition_variable _sleepCondition;

    bool _needQuit;

    int _asyncRefCount;
};

#endif /* SkeletonDataCache_hpp */
