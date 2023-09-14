#include "scripting/lua-bindings/auto/axlua_spine_auto.hpp"
#include "spine/spine-cocos2dx.h"
#include "spine/SkeletonExtend.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_ax_spine_SkeletonRenderer_getSkeleton(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getSkeleton'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getSkeleton'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getSkeleton();
        #pragma warning NO CONVERSION FROM NATIVE FOR spSkeleton*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getSkeleton",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getSkeleton'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setTimeScale");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setTimeScale'", nullptr);
            return 0;
        }
        cobj->setTimeScale(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setTimeScale",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_getTimeScale(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getTimeScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getTimeScale'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getTimeScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getTimeScale",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getTimeScale'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setDebugSlotsEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setDebugSlotsEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setDebugSlotsEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setDebugSlotsEnabled'", nullptr);
            return 0;
        }
        cobj->setDebugSlotsEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setDebugSlotsEnabled",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setDebugSlotsEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_getDebugSlotsEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getDebugSlotsEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getDebugSlotsEnabled'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getDebugSlotsEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getDebugSlotsEnabled",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getDebugSlotsEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setDebugBonesEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setDebugBonesEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setDebugBonesEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setDebugBonesEnabled'", nullptr);
            return 0;
        }
        cobj->setDebugBonesEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setDebugBonesEnabled",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setDebugBonesEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_getDebugBonesEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getDebugBonesEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getDebugBonesEnabled'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getDebugBonesEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getDebugBonesEnabled",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getDebugBonesEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setDebugMeshesEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setDebugMeshesEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setDebugMeshesEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setDebugMeshesEnabled'", nullptr);
            return 0;
        }
        cobj->setDebugMeshesEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setDebugMeshesEnabled",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setDebugMeshesEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_getDebugMeshesEnabled(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getDebugMeshesEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getDebugMeshesEnabled'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getDebugMeshesEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getDebugMeshesEnabled",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getDebugMeshesEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setToSetupPose(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setToSetupPose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setToSetupPose'", nullptr);
            return 0;
        }
        cobj->setToSetupPose();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setToSetupPose",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setToSetupPose'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setBonesToSetupPose(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setBonesToSetupPose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setBonesToSetupPose'", nullptr);
            return 0;
        }
        cobj->setBonesToSetupPose();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setBonesToSetupPose",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setBonesToSetupPose'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setSlotsToSetupPose(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setSlotsToSetupPose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setSlotsToSetupPose'", nullptr);
            return 0;
        }
        cobj->setSlotsToSetupPose();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setSlotsToSetupPose",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setSlotsToSetupPose'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setSkin(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);
#if _AX_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setSkin'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "sp.SkeletonRenderer:setSkin"); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            bool ret = cobj->setSkin(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setSkin");

            if (!ok) { break; }
            bool ret = cobj->setSkin(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "sp.SkeletonRenderer:setSkin",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setSkin'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setAttachment(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);
#if _AX_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setAttachment'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setAttachment");

            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "sp.SkeletonRenderer:setAttachment"); arg1 = arg1_tmp.c_str();

            if (!ok) { break; }
            bool ret = cobj->setAttachment(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setAttachment");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:setAttachment");

            if (!ok) { break; }
            bool ret = cobj->setAttachment(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "sp.SkeletonRenderer:setAttachment",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setAttachment'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setTwoColorTint(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setTwoColorTint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "sp.SkeletonRenderer:setTwoColorTint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setTwoColorTint'", nullptr);
            return 0;
        }
        cobj->setTwoColorTint(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setTwoColorTint",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setTwoColorTint'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_isTwoColorTint(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_isTwoColorTint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_isTwoColorTint'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isTwoColorTint();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:isTwoColorTint",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_isTwoColorTint'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setVertexEffect(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setVertexEffect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        spVertexEffect* arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR spVertexEffect*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setVertexEffect'", nullptr);
            return 0;
        }
        cobj->setVertexEffect(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setVertexEffect",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setVertexEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setSlotsRange(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setSlotsRange'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonRenderer:setSlotsRange");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "sp.SkeletonRenderer:setSlotsRange");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setSlotsRange'", nullptr);
            return 0;
        }
        cobj->setSlotsRange(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setSlotsRange",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setSlotsRange'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_setBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_setBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ax::BlendFunc arg0;

        ok &= luaval_to_blendfunc(tolua_S, 2, &arg0, "sp.SkeletonRenderer:setBlendFunc");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_setBlendFunc'", nullptr);
            return 0;
        }
        cobj->setBlendFunc(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:setBlendFunc",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_setBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_getBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_getBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_getBlendFunc'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getBlendFunc();
        blendfunc_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:getBlendFunc",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_getBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_initWithSkeleton(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_initWithSkeleton'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        spSkeleton* arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initWithSkeleton'", nullptr);
            return 0;
        }
        cobj->initWithSkeleton(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        spSkeleton* arg0;
        bool arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithSkeleton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initWithSkeleton'", nullptr);
            return 0;
        }
        cobj->initWithSkeleton(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        spSkeleton* arg0;
        bool arg1;
        bool arg2;

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithSkeleton");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "sp.SkeletonRenderer:initWithSkeleton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initWithSkeleton'", nullptr);
            return 0;
        }
        cobj->initWithSkeleton(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:initWithSkeleton",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_initWithSkeleton'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_initWithData(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_initWithData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        spSkeletonData* arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeletonData*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initWithData'", nullptr);
            return 0;
        }
        cobj->initWithData(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        spSkeletonData* arg0;
        bool arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeletonData*
		ok = false;

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initWithData'", nullptr);
            return 0;
        }
        cobj->initWithData(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:initWithData",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_initWithData'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_initWithJsonFile(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);
#if _AX_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_initWithJsonFile'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            cobj->initWithJsonFile(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            cobj->initWithJsonFile(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            cobj->initWithJsonFile(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:initWithJsonFile");

            if (!ok) { break; }
            cobj->initWithJsonFile(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "sp.SkeletonRenderer:initWithJsonFile",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_initWithJsonFile'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_initWithBinaryFile(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);
#if _AX_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_initWithBinaryFile'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            cobj->initWithBinaryFile(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            cobj->initWithBinaryFile(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            cobj->initWithBinaryFile(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:initWithBinaryFile");

            if (!ok) { break; }
            cobj->initWithBinaryFile(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "sp.SkeletonRenderer:initWithBinaryFile",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_initWithBinaryFile'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_initialize(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonRenderer*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonRenderer_initialize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_initialize'", nullptr);
            return 0;
        }
        cobj->initialize();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonRenderer:initialize",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_initialize'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonRenderer_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_create'", nullptr);
            return 0;
        }
        auto&& ret = spine::SkeletonRenderer::create();
        object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "sp.SkeletonRenderer:create",argc, 0);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonRenderer_createWithSkeleton(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        spSkeleton* arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_createWithSkeleton'", nullptr);
            return 0;
        }
        auto&& ret = spine::SkeletonRenderer::createWithSkeleton(arg0);
        object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
        return 1;
    }
    if (argc == 2)
    {
        spSkeleton* arg0;
        bool arg1;
        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:createWithSkeleton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_createWithSkeleton'", nullptr);
            return 0;
        }
        auto&& ret = spine::SkeletonRenderer::createWithSkeleton(arg0, arg1);
        object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
        return 1;
    }
    if (argc == 3)
    {
        spSkeleton* arg0;
        bool arg1;
        bool arg2;
        #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;
        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:createWithSkeleton");
        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "sp.SkeletonRenderer:createWithSkeleton");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonRenderer_createWithSkeleton'", nullptr);
            return 0;
        }
        auto&& ret = spine::SkeletonRenderer::createWithSkeleton(arg0, arg1, arg2);
        object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "sp.SkeletonRenderer:createWithSkeleton",argc, 1);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_createWithSkeleton'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonRenderer_createWithFile(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonRenderer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            spine::SkeletonRenderer* ret = spine::SkeletonRenderer::createWithFile(arg0, arg1);
            object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            spine::SkeletonRenderer* ret = spine::SkeletonRenderer::createWithFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            spine::SkeletonRenderer* ret = spine::SkeletonRenderer::createWithFile(arg0, arg1);
            object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:createWithFile");
            if (!ok) { break; }
            spine::SkeletonRenderer* ret = spine::SkeletonRenderer::createWithFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonRenderer>(tolua_S, "sp.SkeletonRenderer",(spine::SkeletonRenderer*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "sp.SkeletonRenderer:createWithFile",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_createWithFile'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonRenderer_constructor(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonRenderer* cobj = nullptr;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            spSkeleton* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            spSkeleton* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            spSkeleton* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR spSkeleton*
		ok = false;

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1, arg2);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj = new spine::SkeletonRenderer();
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            spSkeletonData* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR spSkeletonData*
		ok = false;

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            spSkeletonData* arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR spSkeletonData*
		ok = false;

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1, arg2);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonRenderer:SkeletonRenderer");

            if (!ok) { break; }
            cobj = new spine::SkeletonRenderer(arg0, arg1, arg2);
            cobj->autorelease();
            int ID =  (int)cobj->_ID ;
            int* luaID =  &cobj->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"sp.SkeletonRenderer");
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "sp.SkeletonRenderer:SkeletonRenderer",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonRenderer_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_spine_SkeletonRenderer_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SkeletonRenderer)");
    return 0;
}

int lua_register_ax_spine_SkeletonRenderer(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"sp.SkeletonRenderer");
    tolua_cclass(tolua_S,"SkeletonRenderer","sp.SkeletonRenderer","ax.Node",nullptr);

    tolua_beginmodule(tolua_S,"SkeletonRenderer");
        tolua_function(tolua_S,"new",lua_ax_spine_SkeletonRenderer_constructor);
        tolua_function(tolua_S,"getSkeleton",lua_ax_spine_SkeletonRenderer_getSkeleton);
        tolua_function(tolua_S,"setTimeScale",lua_ax_spine_SkeletonRenderer_setTimeScale);
        tolua_function(tolua_S,"getTimeScale",lua_ax_spine_SkeletonRenderer_getTimeScale);
        tolua_function(tolua_S,"setDebugSlotsEnabled",lua_ax_spine_SkeletonRenderer_setDebugSlotsEnabled);
        tolua_function(tolua_S,"getDebugSlotsEnabled",lua_ax_spine_SkeletonRenderer_getDebugSlotsEnabled);
        tolua_function(tolua_S,"setDebugBonesEnabled",lua_ax_spine_SkeletonRenderer_setDebugBonesEnabled);
        tolua_function(tolua_S,"getDebugBonesEnabled",lua_ax_spine_SkeletonRenderer_getDebugBonesEnabled);
        tolua_function(tolua_S,"setDebugMeshesEnabled",lua_ax_spine_SkeletonRenderer_setDebugMeshesEnabled);
        tolua_function(tolua_S,"getDebugMeshesEnabled",lua_ax_spine_SkeletonRenderer_getDebugMeshesEnabled);
        tolua_function(tolua_S,"setToSetupPose",lua_ax_spine_SkeletonRenderer_setToSetupPose);
        tolua_function(tolua_S,"setBonesToSetupPose",lua_ax_spine_SkeletonRenderer_setBonesToSetupPose);
        tolua_function(tolua_S,"setSlotsToSetupPose",lua_ax_spine_SkeletonRenderer_setSlotsToSetupPose);
        tolua_function(tolua_S,"setSkin",lua_ax_spine_SkeletonRenderer_setSkin);
        tolua_function(tolua_S,"setAttachment",lua_ax_spine_SkeletonRenderer_setAttachment);
        tolua_function(tolua_S,"setTwoColorTint",lua_ax_spine_SkeletonRenderer_setTwoColorTint);
        tolua_function(tolua_S,"isTwoColorTint",lua_ax_spine_SkeletonRenderer_isTwoColorTint);
        tolua_function(tolua_S,"setVertexEffect",lua_ax_spine_SkeletonRenderer_setVertexEffect);
        tolua_function(tolua_S,"setSlotsRange",lua_ax_spine_SkeletonRenderer_setSlotsRange);
        tolua_function(tolua_S,"setBlendFunc",lua_ax_spine_SkeletonRenderer_setBlendFunc);
        tolua_function(tolua_S,"getBlendFunc",lua_ax_spine_SkeletonRenderer_getBlendFunc);
        tolua_function(tolua_S,"initWithSkeleton",lua_ax_spine_SkeletonRenderer_initWithSkeleton);
        tolua_function(tolua_S,"initWithData",lua_ax_spine_SkeletonRenderer_initWithData);
        tolua_function(tolua_S,"initWithJsonFile",lua_ax_spine_SkeletonRenderer_initWithJsonFile);
        tolua_function(tolua_S,"initWithBinaryFile",lua_ax_spine_SkeletonRenderer_initWithBinaryFile);
        tolua_function(tolua_S,"initialize",lua_ax_spine_SkeletonRenderer_initialize);
        tolua_function(tolua_S,"create", lua_ax_spine_SkeletonRenderer_create);
        tolua_function(tolua_S,"createWithSkeleton", lua_ax_spine_SkeletonRenderer_createWithSkeleton);
        tolua_function(tolua_S,"createWithFile", lua_ax_spine_SkeletonRenderer_createWithFile);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(spine::SkeletonRenderer).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "sp.SkeletonRenderer";
    g_typeCast[typeName] = "sp.SkeletonRenderer";
    return 1;
}

int lua_ax_spine_SkeletonAnimation_setMix(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setMix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string arg0;
        std::string arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:setMix");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:setMix");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:setMix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setMix'", nullptr);
            return 0;
        }
        cobj->setMix(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setMix",argc, 3);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setMix'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setEmptyAnimation(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        double arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:setEmptyAnimation");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "sp.SkeletonAnimation:setEmptyAnimation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimation'", nullptr);
            return 0;
        }
        auto&& ret = cobj->setEmptyAnimation(arg0, arg1);
        #pragma warning NO CONVERSION FROM NATIVE FOR spTrackEntry*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEmptyAnimation",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setEmptyAnimations(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimations'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "sp.SkeletonAnimation:setEmptyAnimations");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimations'", nullptr);
            return 0;
        }
        cobj->setEmptyAnimations(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEmptyAnimations",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setEmptyAnimations'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_addEmptyAnimation(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_addEmptyAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        double arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:addEmptyAnimation");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "sp.SkeletonAnimation:addEmptyAnimation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_addEmptyAnimation'", nullptr);
            return 0;
        }
        auto&& ret = cobj->addEmptyAnimation(arg0, arg1);
        #pragma warning NO CONVERSION FROM NATIVE FOR spTrackEntry*;
        return 1;
    }
    if (argc == 3) 
    {
        int arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:addEmptyAnimation");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "sp.SkeletonAnimation:addEmptyAnimation");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:addEmptyAnimation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_addEmptyAnimation'", nullptr);
            return 0;
        }
        auto&& ret = cobj->addEmptyAnimation(arg0, arg1, arg2);
        #pragma warning NO CONVERSION FROM NATIVE FOR spTrackEntry*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:addEmptyAnimation",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_addEmptyAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_findAnimation(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_findAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:findAnimation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_findAnimation'", nullptr);
            return 0;
        }
        auto&& ret = cobj->findAnimation(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR spAnimation*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:findAnimation",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_findAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_clearTracks(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_clearTracks'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_clearTracks'", nullptr);
            return 0;
        }
        cobj->clearTracks();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:clearTracks",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_clearTracks'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_clearTrack(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_clearTrack'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_clearTrack'", nullptr);
            return 0;
        }
        cobj->clearTrack();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:clearTrack");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_clearTrack'", nullptr);
            return 0;
        }
        cobj->clearTrack(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:clearTrack",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_clearTrack'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setStartListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setStartListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setStartListener'", nullptr);
            return 0;
        }
        cobj->setStartListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setStartListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setStartListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setInterruptListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setInterruptListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setInterruptListener'", nullptr);
            return 0;
        }
        cobj->setInterruptListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setInterruptListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setInterruptListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setEndListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setEndListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setEndListener'", nullptr);
            return 0;
        }
        cobj->setEndListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEndListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setEndListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setDisposeListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setDisposeListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setDisposeListener'", nullptr);
            return 0;
        }
        cobj->setDisposeListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setDisposeListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setDisposeListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setCompleteListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setCompleteListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setCompleteListener'", nullptr);
            return 0;
        }
        cobj->setCompleteListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setCompleteListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setCompleteListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setEventListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (spTrackEntry *, spEvent *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setEventListener'", nullptr);
            return 0;
        }
        cobj->setEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEventListener",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackStartListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackStartListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackStartListener'", nullptr);
            return 0;
        }
        cobj->setTrackStartListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackStartListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackStartListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackInterruptListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackInterruptListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackInterruptListener'", nullptr);
            return 0;
        }
        cobj->setTrackInterruptListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackInterruptListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackInterruptListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackEndListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackEndListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackEndListener'", nullptr);
            return 0;
        }
        cobj->setTrackEndListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackEndListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackEndListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackDisposeListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackDisposeListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackDisposeListener'", nullptr);
            return 0;
        }
        cobj->setTrackDisposeListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackDisposeListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackDisposeListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackCompleteListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackCompleteListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackCompleteListener'", nullptr);
            return 0;
        }
        cobj->setTrackCompleteListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackCompleteListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackCompleteListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_setTrackEventListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonAnimation_setTrackEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (spTrackEntry *, spEvent *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_setTrackEventListener'", nullptr);
            return 0;
        }
        cobj->setTrackEventListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackEventListener",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_setTrackEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonAnimation_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonAnimation_create'", nullptr);
            return 0;
        }
        auto&& ret = spine::SkeletonAnimation::create();
        object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "sp.SkeletonAnimation:create",argc, 0);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonAnimation_createWithJsonFile(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithJsonFile(arg0, arg1);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithJsonFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithJsonFile(arg0, arg1);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:createWithJsonFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithJsonFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "sp.SkeletonAnimation:createWithJsonFile",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_createWithJsonFile'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonAnimation_createWithBinaryFile(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithBinaryFile(arg0, arg1);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithBinaryFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithBinaryFile(arg0, arg1);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            spAtlas* arg1;
            #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:createWithBinaryFile");
            if (!ok) { break; }
            spine::SkeletonAnimation* ret = spine::SkeletonAnimation::createWithBinaryFile(arg0, arg1, arg2);
            object_to_luaval<spine::SkeletonAnimation>(tolua_S, "sp.SkeletonAnimation",(spine::SkeletonAnimation*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "sp.SkeletonAnimation:createWithBinaryFile",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonAnimation_createWithBinaryFile'.",&tolua_err);
#endif
    return 0;
}
static int lua_ax_spine_SkeletonAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SkeletonAnimation)");
    return 0;
}

int lua_register_ax_spine_SkeletonAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"sp.SkeletonAnimation");
    tolua_cclass(tolua_S,"SkeletonAnimation","sp.SkeletonAnimation","sp.SkeletonRenderer",nullptr);

    tolua_beginmodule(tolua_S,"SkeletonAnimation");
        tolua_function(tolua_S,"setMix",lua_ax_spine_SkeletonAnimation_setMix);
        tolua_function(tolua_S,"setEmptyAnimation",lua_ax_spine_SkeletonAnimation_setEmptyAnimation);
        tolua_function(tolua_S,"setEmptyAnimations",lua_ax_spine_SkeletonAnimation_setEmptyAnimations);
        tolua_function(tolua_S,"addEmptyAnimation",lua_ax_spine_SkeletonAnimation_addEmptyAnimation);
        tolua_function(tolua_S,"findAnimation",lua_ax_spine_SkeletonAnimation_findAnimation);
        tolua_function(tolua_S,"clearTracks",lua_ax_spine_SkeletonAnimation_clearTracks);
        tolua_function(tolua_S,"clearTrack",lua_ax_spine_SkeletonAnimation_clearTrack);
        tolua_function(tolua_S,"setStartListener",lua_ax_spine_SkeletonAnimation_setStartListener);
        tolua_function(tolua_S,"setInterruptListener",lua_ax_spine_SkeletonAnimation_setInterruptListener);
        tolua_function(tolua_S,"setEndListener",lua_ax_spine_SkeletonAnimation_setEndListener);
        tolua_function(tolua_S,"setDisposeListener",lua_ax_spine_SkeletonAnimation_setDisposeListener);
        tolua_function(tolua_S,"setCompleteListener",lua_ax_spine_SkeletonAnimation_setCompleteListener);
        tolua_function(tolua_S,"setEventListener",lua_ax_spine_SkeletonAnimation_setEventListener);
        tolua_function(tolua_S,"setTrackStartListener",lua_ax_spine_SkeletonAnimation_setTrackStartListener);
        tolua_function(tolua_S,"setTrackInterruptListener",lua_ax_spine_SkeletonAnimation_setTrackInterruptListener);
        tolua_function(tolua_S,"setTrackEndListener",lua_ax_spine_SkeletonAnimation_setTrackEndListener);
        tolua_function(tolua_S,"setTrackDisposeListener",lua_ax_spine_SkeletonAnimation_setTrackDisposeListener);
        tolua_function(tolua_S,"setTrackCompleteListener",lua_ax_spine_SkeletonAnimation_setTrackCompleteListener);
        tolua_function(tolua_S,"setTrackEventListener",lua_ax_spine_SkeletonAnimation_setTrackEventListener);
        tolua_function(tolua_S,"create", lua_ax_spine_SkeletonAnimation_create);
        tolua_function(tolua_S,"createWithJsonFile", lua_ax_spine_SkeletonAnimation_createWithJsonFile);
        tolua_function(tolua_S,"createWithBinaryFile", lua_ax_spine_SkeletonAnimation_createWithBinaryFile);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(spine::SkeletonAnimation).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "sp.SkeletonAnimation";
    g_typeCast[typeName] = "sp.SkeletonAnimation";
    return 1;
}

int lua_ax_spine_SkeletonDataCache_preloadAsync(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonDataCache* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonDataCache*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonDataCache_preloadAsync'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:preloadAsync");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonDataCache:preloadAsync");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_preloadAsync'", nullptr);
            return 0;
        }
        cobj->preloadAsync(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        std::string arg0;
        std::string arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:preloadAsync");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonDataCache:preloadAsync");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "SkeletonDataCache:preloadAsync");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_preloadAsync'", nullptr);
            return 0;
        }
        cobj->preloadAsync(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 4) 
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        std::function<void (bool)> arg3;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:preloadAsync");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonDataCache:preloadAsync");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "SkeletonDataCache:preloadAsync");

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_preloadAsync'", nullptr);
            return 0;
        }
        cobj->preloadAsync(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonDataCache:preloadAsync",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_preloadAsync'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonDataCache_addItem(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonDataCache* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonDataCache*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonDataCache_addItem'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        std::string arg0;
        spSkeletonData* arg1;
        spAtlas* arg2;
        spAttachmentLoader* arg3;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:addItem");

        #pragma warning NO CONVERSION TO NATIVE FOR spSkeletonData*
		ok = false;

        #pragma warning NO CONVERSION TO NATIVE FOR spAtlas*
		ok = false;

        #pragma warning NO CONVERSION TO NATIVE FOR spAttachmentLoader*
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_addItem'", nullptr);
            return 0;
        }
        auto&& ret = cobj->addItem(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonDataCache:addItem",argc, 4);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_addItem'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonDataCache_findItem(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonDataCache* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonDataCache*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonDataCache_findItem'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:findItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_findItem'", nullptr);
            return 0;
        }
        auto&& ret = cobj->findItem(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR SkeletonDataItem*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonDataCache:findItem",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_findItem'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonDataCache_delItem(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonDataCache* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonDataCache*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonDataCache_delItem'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonDataCache:delItem");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_delItem'", nullptr);
            return 0;
        }
        auto&& ret = cobj->delItem(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonDataCache:delItem",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_delItem'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonDataCache_clearCaches(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonDataCache* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonDataCache*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonDataCache_clearCaches'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_clearCaches'", nullptr);
            return 0;
        }
        cobj->clearCaches();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonDataCache:clearCaches",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_clearCaches'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonDataCache_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SkeletonDataCache",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonDataCache_getInstance'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonDataCache::getInstance();
        object_to_luaval<SkeletonDataCache>(tolua_S, "SkeletonDataCache",(SkeletonDataCache*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "SkeletonDataCache:getInstance",argc, 0);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonDataCache_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_ax_spine_SkeletonDataCache_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SkeletonDataCache)");
    return 0;
}

int lua_register_ax_spine_SkeletonDataCache(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SkeletonDataCache");
    tolua_cclass(tolua_S,"SkeletonDataCache","SkeletonDataCache","ax.Ref",nullptr);

    tolua_beginmodule(tolua_S,"SkeletonDataCache");
        tolua_function(tolua_S,"preloadAsync",lua_ax_spine_SkeletonDataCache_preloadAsync);
        tolua_function(tolua_S,"addItem",lua_ax_spine_SkeletonDataCache_addItem);
        tolua_function(tolua_S,"findItem",lua_ax_spine_SkeletonDataCache_findItem);
        tolua_function(tolua_S,"delItem",lua_ax_spine_SkeletonDataCache_delItem);
        tolua_function(tolua_S,"clearCaches",lua_ax_spine_SkeletonDataCache_clearCaches);
        tolua_function(tolua_S,"getInstance", lua_ax_spine_SkeletonDataCache_getInstance);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(SkeletonDataCache).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "SkeletonDataCache";
    g_typeCast[typeName] = "SkeletonDataCache";
    return 1;
}

int lua_ax_spine_SkeletonExtend_bindBoneNode(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_bindBoneNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:bindBoneNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_bindBoneNode'", nullptr);
            return 0;
        }
        auto&& ret = cobj->bindBoneNode(arg0);
        object_to_luaval<ax::Node>(tolua_S, "ax.Node",(ax::Node*)ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:bindBoneNode");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonExtend:bindBoneNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_bindBoneNode'", nullptr);
            return 0;
        }
        auto&& ret = cobj->bindBoneNode(arg0, arg1);
        object_to_luaval<ax::Node>(tolua_S, "ax.Node",(ax::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:bindBoneNode",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_bindBoneNode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_getBoneLocation(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_getBoneLocation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:getBoneLocation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_getBoneLocation'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getBoneLocation(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:getBoneLocation",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_getBoneLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_getBonePosition(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_getBonePosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:getBonePosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_getBonePosition'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getBonePosition(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:getBonePosition",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_getBonePosition'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_isComplete(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_isComplete'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_isComplete'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isComplete();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "SkeletonExtend:isComplete");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_isComplete'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isComplete(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:isComplete",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_isComplete'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_resetWithKey(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_resetWithKey'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:resetWithKey");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_resetWithKey'", nullptr);
            return 0;
        }
        cobj->resetWithKey(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:resetWithKey",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_resetWithKey'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_scheduleUpdateLua(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_scheduleUpdateLua'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_scheduleUpdateLua'", nullptr);
            return 0;
        }
        cobj->scheduleUpdateLua();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:scheduleUpdateLua",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_scheduleUpdateLua'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_getAnimationTime(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_getAnimationTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:getAnimationTime");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_getAnimationTime'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getAnimationTime(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:getAnimationTime",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_getAnimationTime'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_setTimePercent(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_setTimePercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "SkeletonExtend:setTimePercent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_setTimePercent'", nullptr);
            return 0;
        }
        cobj->setTimePercent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:setTimePercent",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_setTimePercent'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_getAnimations(lua_State* tolua_S)
{
    int argc = 0;
    SkeletonExtend* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SkeletonExtend*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_spine_SkeletonExtend_getAnimations'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_getAnimations'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getAnimations();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SkeletonExtend:getAnimations",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_getAnimations'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_spine_SkeletonExtend_loadJsonData(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:loadJsonData");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonExtend:loadJsonData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_loadJsonData'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonExtend::loadJsonData(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:loadJsonData");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonExtend:loadJsonData");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "SkeletonExtend:loadJsonData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_loadJsonData'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonExtend::loadJsonData(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "SkeletonExtend:loadJsonData",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_loadJsonData'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonExtend_loadBinaryData(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:loadBinaryData");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonExtend:loadBinaryData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_loadBinaryData'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonExtend::loadBinaryData(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:loadBinaryData");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SkeletonExtend:loadBinaryData");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "SkeletonExtend:loadBinaryData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_loadBinaryData'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonExtend::loadBinaryData(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "SkeletonExtend:loadBinaryData",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_loadBinaryData'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_spine_SkeletonExtend_createWithKey(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SkeletonExtend",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SkeletonExtend:createWithKey");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_spine_SkeletonExtend_createWithKey'", nullptr);
            return 0;
        }
        auto&& ret = SkeletonExtend::createWithKey(arg0);
        object_to_luaval<SkeletonExtend>(tolua_S, "SkeletonExtend",(SkeletonExtend*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "SkeletonExtend:createWithKey",argc, 1);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_spine_SkeletonExtend_createWithKey'.",&tolua_err);
#endif
    return 0;
}
static int lua_ax_spine_SkeletonExtend_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SkeletonExtend)");
    return 0;
}

int lua_register_ax_spine_SkeletonExtend(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SkeletonExtend");
    tolua_cclass(tolua_S,"SkeletonExtend","SkeletonExtend","sp.SkeletonAnimation",nullptr);

    tolua_beginmodule(tolua_S,"SkeletonExtend");
        tolua_function(tolua_S,"bindBoneNode",lua_ax_spine_SkeletonExtend_bindBoneNode);
        tolua_function(tolua_S,"getBoneLocation",lua_ax_spine_SkeletonExtend_getBoneLocation);
        tolua_function(tolua_S,"getBonePosition",lua_ax_spine_SkeletonExtend_getBonePosition);
        tolua_function(tolua_S,"isComplete",lua_ax_spine_SkeletonExtend_isComplete);
        tolua_function(tolua_S,"resetWithKey",lua_ax_spine_SkeletonExtend_resetWithKey);
        tolua_function(tolua_S,"scheduleUpdateLua",lua_ax_spine_SkeletonExtend_scheduleUpdateLua);
        tolua_function(tolua_S,"getAnimationTime",lua_ax_spine_SkeletonExtend_getAnimationTime);
        tolua_function(tolua_S,"setTimePercent",lua_ax_spine_SkeletonExtend_setTimePercent);
        tolua_function(tolua_S,"getAnimations",lua_ax_spine_SkeletonExtend_getAnimations);
        tolua_function(tolua_S,"loadJsonData", lua_ax_spine_SkeletonExtend_loadJsonData);
        tolua_function(tolua_S,"loadBinaryData", lua_ax_spine_SkeletonExtend_loadBinaryData);
        tolua_function(tolua_S,"createWithKey", lua_ax_spine_SkeletonExtend_createWithKey);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(SkeletonExtend).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "SkeletonExtend";
    g_typeCast[typeName] = "SkeletonExtend";
    return 1;
}
TOLUA_API int register_all_ax_spine(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"sp",0);
	tolua_beginmodule(tolua_S,"sp");

	lua_register_ax_spine_SkeletonRenderer(tolua_S);
	lua_register_ax_spine_SkeletonAnimation(tolua_S);
	lua_register_ax_spine_SkeletonDataCache(tolua_S);
	lua_register_ax_spine_SkeletonExtend(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

