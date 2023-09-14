//
//  SkeletonExtend.cpp
//  cocos2d_lua_bindings
//
//  Created by john on 3/23/18.
//

#include <spine/extension.h>
#include <spine/Cocos2dAttachmentLoader.h>
#include "SkeletonExtend.hpp"

SkeletonExtend::~SkeletonExtend()
{
    if (m_cacheDataItem != nullptr)
        m_cacheDataItem->release();
}

void SkeletonExtend::update (float deltaTime) {
    this->retain();
    SkeletonAnimation::update(deltaTime);
    
    for (auto iter = bindingNode.begin(); iter != bindingNode.end(); iter++){
        //slotNode
        spBone *bone = iter->bone;
        
        if (bone) {
            iter->node->setVisible(true);
            
            iter->node->setPosition(Point(bone->worldX, bone->worldY));
            iter->node->setScaleX(spBone_getWorldScaleX(bone));
            iter->node->setScaleY(spBone_getWorldScaleY(bone));
            if (iter->node->getName() == "R"){
                float rotationY = spBone_getWorldRotationY(bone);
                iter->node->setRotation(-rotationY);
            }
            
            if(iter->slot){
                // 更新子节点，设置透明度
                Vector<Node*> childNodes = iter->node->getChildren();
                for (int i = 0; i < childNodes.size(); i ++) {
                    Node* childNode = childNodes.at(i);
                    if (childNode->getName() == "sprite"){
                        childNode->setOpacity(iter->slot->color.a * 255);
                    }
                }
            }
        }
    }
    
    this->release();
}

// 绑定跟随节点
Node* SkeletonExtend::bindBoneNode(const std::string &name, const std::string nodeName){
    std::string bindName = name + "_" + nodeName;
    
    for (auto iter = bindingNode.begin(); iter != bindingNode.end(); ++iter) {
        if (iter->name == bindName) {
            return iter->node;
        }
    }
    
    spBone *bone = findBone(name);
    if (bone) {
        BindingNodeAttr bNode;
        bNode.bone = bone;
        
        bNode.name = bindName;
        bNode.node = Node::create();

        spSlot* slot = findSlot(name);
        if (slot){
            bNode.slot = slot;
        }else{
            bNode.slot = nullptr;
        }

        addChild(bNode.node);
        bindingNode.push_back(bNode);
        return bNode.node;
    }
    
    return nullptr;
}

// 获取骨骼位置
Vec2 SkeletonExtend::getBoneLocation(const std::string &boneName){
    spBone *bone = findBone(boneName);
    
    if (bone){
        return Vec2(bone->worldX, bone->worldY);
    }
    
    return Vec2::ZERO;
}

// 获取骨骼全局坐标
Vec2 SkeletonExtend::getBonePosition(const std::string &boneName){
    return PointApplyAffineTransform(getBoneLocation(boneName), getNodeToParentAffineTransform());
}

bool SkeletonExtend::isComplete(int trackIndex){
    spTrackEntry* track = getCurrent(trackIndex);

    if (track == NULL) {
        return true;
    }
    
    return track->animationEnd < track->trackTime && track->loop == 0;
}

// 加载json数据
bool SkeletonExtend::loadJsonData(const std::string & skeletonDataFile, const std::string& atlasFile, float scale)
{
    // 先判断缓存是否存在
    SkeletonDataItem *cachaItem = SkeletonDataCache::getInstance()->findItem(skeletonDataFile);
    if (cachaItem != nullptr){
        return true;
    }
    
    spAtlas* atlas = spAtlas_createFromFile(atlasFile.c_str(), 0);
    if (atlas == nullptr) {
        return false;
    }

    spAttachmentLoader* attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(atlas));
    
    spSkeletonJson* json = spSkeletonJson_createWithLoader(attachmentLoader);
    json->scale = scale;
    spSkeletonData* skeletonData = spSkeletonJson_readSkeletonDataFile(json, skeletonDataFile.c_str());
    spSkeletonJson_dispose(json);

    if(skeletonData == nullptr){
        return false;
    }
    
    // add cache
    SkeletonDataCache::getInstance()->addItem(skeletonDataFile, skeletonData, atlas, attachmentLoader);
    
    return true;
}

// 加载binary数据
bool SkeletonExtend::loadBinaryData(const std::string & skeletonDataFile, const std::string& atlasFile, float scale)
{
    // 先判断缓存是否存在
    SkeletonDataItem *cachaItem = SkeletonDataCache::getInstance()->findItem(skeletonDataFile);
    if (cachaItem != nullptr){
        return true;
    }

    spAtlas* atlas = spAtlas_createFromFile(atlasFile.c_str(), 0);
    if (atlas == nullptr) {
        return false;
    }

    spAttachmentLoader* attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(atlas));

    spSkeletonBinary* binary = spSkeletonBinary_createWithLoader(attachmentLoader);
    binary->scale = scale;
    spSkeletonData* skeletonData = spSkeletonBinary_readSkeletonDataFile(binary, skeletonDataFile.c_str());
    spSkeletonBinary_dispose(binary);
    if(skeletonData == nullptr){
        return false;
    }

    // add cache
    SkeletonDataCache::getInstance()->addItem(skeletonDataFile, skeletonData, atlas, attachmentLoader);

    return true;
}

// 以key加载
SkeletonExtend* SkeletonExtend::createWithKey(const std::string &key)
{
    // 先判断缓存是否存在
    SkeletonDataItem* cachaItem = SkeletonDataCache::getInstance()->findItem(key);
    if (cachaItem == nullptr){
        return nullptr;
    }

    SkeletonExtend* node = new SkeletonExtend();
    node->autorelease();

    cachaItem->retain();
    node->m_cacheDataItem = cachaItem;
    
    node->initWithData(cachaItem->data);
    
    return node;
}

void SkeletonExtend::resetWithKey(const std::string &key)
{
    // 先判断缓存是否存在
    SkeletonDataItem* cachaItem = SkeletonDataCache::getInstance()->findItem(key);
    if (cachaItem == nullptr){
        return;
    }
    
    if (this->m_cacheDataItem){
        this->m_cacheDataItem->release();
    }
    
    cachaItem->retain();
    this->m_cacheDataItem = cachaItem;
    this->initWithData(cachaItem->data);
}

void SkeletonExtend::scheduleUpdateLua() {
    scheduleUpdate();
}

// 获取动画时间长度
float SkeletonExtend::getAnimationTime(const std::string &name){
    return this->findAnimation(name)->duration;
}

void SkeletonExtend::setTimePercent(float p){
    int i;
    
    for (i = 0; i < _state->tracksCount; ++i) {
        spTrackEntry* current = _state->tracks[i];
        if (!current) continue;
        
        current->trackTime = current->animationEnd * p;
    }
}

std::vector<std::string> SkeletonExtend::getAnimations()
{
    std::vector<std::string> animVec;
    
    int i;
    for (i = 0; i < _skeleton->data->animationsCount; ++i)
    {
        animVec.push_back(_skeleton->data->animations[i]->name);
    }
    
    return animVec;
}

// 重载onEnter
void SkeletonExtend::onEnter () {
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript && ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnEnter)) return;
#endif
    Node::onEnter();
    
    update(0);
}

// 重载getBoundingBox
cocos2d::Rect SkeletonExtend::getBoundingBox () const
{
    cocos2d::Rect r;
    float scaleX = getScaleX(), scaleY = getScaleY();
    
    spAttachment* attachment = getAttachment("bbox" , "bbox");
    if (attachment && attachment->type == SP_ATTACHMENT_BOUNDING_BOX) {
        
        auto bounds = spSkeletonBounds_create();
        spSkeletonBounds_update(bounds, _skeleton, true);
        
        r.setRect(bounds->minX * scaleX, bounds->minY * scaleY, (bounds->maxX - bounds->minX) * scaleX, (bounds->maxY - bounds->minY) * scaleY );
        
        spSkeletonBounds_dispose(bounds);
    }else{
        r = SkeletonRenderer::getBoundingBox();
    }
    
    return r;
}
