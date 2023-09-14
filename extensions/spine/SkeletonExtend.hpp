//
//  SkeletonExtend.hpp
//  cocos2d_lua_bindings
//
//  Created by john on 3/23/18.
//

#ifndef SkeletonExtend_hpp
#define SkeletonExtend_hpp

#include <stdio.h>
#include "spine/SkeletonAnimation.h"
#include "SkeletonDataCache.hpp"

USING_NS_CC;

class SkeletonExtend : public spine::SkeletonAnimation {
    
private:
    struct BindingNodeAttr{
        Node * node;        //显示节点
        std::string name;   //名称
        spBone* bone;
        spSlot* slot;
    };
    std::vector<BindingNodeAttr> bindingNode;

    void update (float deltaTime) override;

    SkeletonDataItem* m_cacheDataItem;
public:
    // 析构函数
    ~SkeletonExtend();
    
    // 绑定跟随节点
    Node* bindBoneNode(const std::string &name, const std::string nodeName = "default");
    
    // 获取骨骼本地坐标
    Vec2 getBoneLocation(const std::string &boneName);
    
    // 获取骨骼全局坐标
    Vec2 getBonePosition(const std::string &boneName);
    
    // 判断指定轨道的动画是否运行完毕
    bool isComplete(int trackIndex = 0);
    
    // 加载json数据
    static bool loadJsonData(const std::string & skeletonDataFile, const std::string& atlasFile, float scale = 1);
    
    // 加载binary数据
    static bool loadBinaryData(const std::string & skeletonDataFile, const std::string& atlasFile, float scale = 1);
    
    // 以key加载
    static SkeletonExtend* createWithKey(const std::string &key);
    
    // 以key重置
    void resetWithKey(const std::string &key);
    
    // 手动开启循环帧
    void scheduleUpdateLua();
    
    // 获取动画时间长度
    float getAnimationTime(const std::string &name);
    
    // 设置动画进度
    void setTimePercent(float p);
    
    // 获取动画列表
    std::vector<std::string> getAnimations();

    virtual void onEnter () override;
    
    virtual cocos2d::Rect getBoundingBox () const override;
};

#endif /* SkeletonExtend_hpp */
