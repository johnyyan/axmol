#include "scripting/lua-bindings/auto/axlua_extension_auto.hpp"
#include "cocos-ext.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_ax_extension_AssetsManager_checkUpdate(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_checkUpdate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_checkUpdate'", nullptr);
            return 0;
        }
        auto&& ret = cobj->checkUpdate();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:checkUpdate",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_checkUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_update(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_update'", nullptr);
            return 0;
        }
        cobj->update();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:update",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_update'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_getPackageUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_getPackageUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_getPackageUrl'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getPackageUrl();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:getPackageUrl",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_getPackageUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_setPackageUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_setPackageUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:setPackageUrl"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_setPackageUrl'", nullptr);
            return 0;
        }
        cobj->setPackageUrl(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:setPackageUrl",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_setPackageUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_getVersionFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_getVersionFileUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_getVersionFileUrl'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getVersionFileUrl();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:getVersionFileUrl",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_getVersionFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_setVersionFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_setVersionFileUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:setVersionFileUrl"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_setVersionFileUrl'", nullptr);
            return 0;
        }
        cobj->setVersionFileUrl(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:setVersionFileUrl",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_setVersionFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_getVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_getVersion'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getVersion();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:getVersion",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_deleteVersion(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_deleteVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_deleteVersion'", nullptr);
            return 0;
        }
        cobj->deleteVersion();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:deleteVersion",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_deleteVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_getStoragePath(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_getStoragePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_getStoragePath'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getStoragePath();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:getStoragePath",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_getStoragePath'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_setStoragePath(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_setStoragePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:setStoragePath"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_setStoragePath'", nullptr);
            return 0;
        }
        cobj->setStoragePath(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:setStoragePath",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_setStoragePath'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_setConnectionTimeout(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_setConnectionTimeout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "ax.AssetsManager:setConnectionTimeout");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_setConnectionTimeout'", nullptr);
            return 0;
        }
        cobj->setConnectionTimeout(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:setConnectionTimeout",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_setConnectionTimeout'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_getConnectionTimeout(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManager_getConnectionTimeout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_getConnectionTimeout'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getConnectionTimeout();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:getConnectionTimeout",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_getConnectionTimeout'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManager_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 6)
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        std::function<void (int)> arg3;
        std::function<void (int)> arg4;
        std::function<void ()> arg5;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:create"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ax.AssetsManager:create"); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ax.AssetsManager:create"); arg2 = arg2_tmp.c_str();
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_create'", nullptr);
            return 0;
        }
        auto&& ret = ax::extension::AssetsManager::create(arg0, arg1, arg2, arg3, arg4, arg5);
        object_to_luaval<ax::extension::AssetsManager>(tolua_S, "ax.AssetsManager",(ax::extension::AssetsManager*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.AssetsManager:create",argc, 6);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_extension_AssetsManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::AssetsManager();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.AssetsManager");
        return 1;
    }
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:AssetsManager"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::AssetsManager(arg0);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.AssetsManager");
        return 1;
    }
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:AssetsManager"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ax.AssetsManager:AssetsManager"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::AssetsManager(arg0, arg1);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.AssetsManager");
        return 1;
    }
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ax.AssetsManager:AssetsManager"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ax.AssetsManager:AssetsManager"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ax.AssetsManager:AssetsManager"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManager_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::AssetsManager(arg0, arg1, arg2);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.AssetsManager");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManager:AssetsManager",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_extension_AssetsManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AssetsManager)");
    return 0;
}

int lua_register_ax_extension_AssetsManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.AssetsManager");
    tolua_cclass(tolua_S,"AssetsManager","ax.AssetsManager","ax.Node",nullptr);

    tolua_beginmodule(tolua_S,"AssetsManager");
        tolua_function(tolua_S,"new",lua_ax_extension_AssetsManager_constructor);
        tolua_function(tolua_S,"checkUpdate",lua_ax_extension_AssetsManager_checkUpdate);
        tolua_function(tolua_S,"update",lua_ax_extension_AssetsManager_update);
        tolua_function(tolua_S,"getPackageUrl",lua_ax_extension_AssetsManager_getPackageUrl);
        tolua_function(tolua_S,"setPackageUrl",lua_ax_extension_AssetsManager_setPackageUrl);
        tolua_function(tolua_S,"getVersionFileUrl",lua_ax_extension_AssetsManager_getVersionFileUrl);
        tolua_function(tolua_S,"setVersionFileUrl",lua_ax_extension_AssetsManager_setVersionFileUrl);
        tolua_function(tolua_S,"getVersion",lua_ax_extension_AssetsManager_getVersion);
        tolua_function(tolua_S,"deleteVersion",lua_ax_extension_AssetsManager_deleteVersion);
        tolua_function(tolua_S,"getStoragePath",lua_ax_extension_AssetsManager_getStoragePath);
        tolua_function(tolua_S,"setStoragePath",lua_ax_extension_AssetsManager_setStoragePath);
        tolua_function(tolua_S,"setConnectionTimeout",lua_ax_extension_AssetsManager_setConnectionTimeout);
        tolua_function(tolua_S,"getConnectionTimeout",lua_ax_extension_AssetsManager_getConnectionTimeout);
        tolua_function(tolua_S,"create", lua_ax_extension_AssetsManager_create);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::extension::AssetsManager).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.AssetsManager";
    g_typeCast[typeName] = "ax.AssetsManager";
    return 1;
}

int lua_ax_extension_EventAssetsManagerEx_getEventCode(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getEventCode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getEventCode'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getEventCode();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getEventCode",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getEventCode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getCURLECode(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getCURLECode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getCURLECode'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getCURLECode();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getCURLECode",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getCURLECode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getCURLMCode(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getCURLMCode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getCURLMCode'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getCURLMCode();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getCURLMCode",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getCURLMCode'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getMessage(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getMessage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getMessage'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getMessage();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getMessage",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getMessage'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getAssetId(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getAssetId'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getAssetId'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getAssetId();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getAssetId",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getAssetId'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getAssetsManagerEx(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getAssetsManagerEx'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getAssetsManagerEx'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getAssetsManagerEx();
        object_to_luaval<ax::extension::AssetsManagerEx>(tolua_S, "ax.AssetsManagerEx",(ax::extension::AssetsManagerEx*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getAssetsManagerEx",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getAssetsManagerEx'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getPercent(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getPercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getPercent'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getPercent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getPercent",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_getPercentByFile(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventAssetsManagerEx_getPercentByFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_getPercentByFile'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getPercentByFile();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:getPercentByFile",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_getPercentByFile'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventAssetsManagerEx_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 4) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 5) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;
        double arg4;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3, arg4);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 6) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;
        double arg4;
        std::string_view arg5;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 7,&arg5, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3, arg4, arg5);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 7) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;
        double arg4;
        std::string_view arg5;
        std::string_view arg6;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 7,&arg5, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 8,&arg6, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 8) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;
        double arg4;
        std::string_view arg5;
        std::string_view arg6;
        int arg7;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 7,&arg5, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 8,&arg6, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 9,(int *)&arg7, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    if (argc == 9) 
    {
        std::string_view arg0;
        ax::extension::AssetsManagerEx* arg1;
        ax::extension::EventAssetsManagerEx::EventCode arg2;
        double arg3;
        double arg4;
        std::string_view arg5;
        std::string_view arg6;
        int arg7;
        int arg8;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_object<ax::extension::AssetsManagerEx>(tolua_S, 3, "ax.AssetsManagerEx",&arg1, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 7,&arg5, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 8,&arg6, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 9,(int *)&arg7, "ax.EventAssetsManagerEx:EventAssetsManagerEx");

        ok &= luaval_to_int32(tolua_S, 10,(int *)&arg8, "ax.EventAssetsManagerEx:EventAssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventAssetsManagerEx(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventAssetsManagerEx");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventAssetsManagerEx:EventAssetsManagerEx",argc, 3);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventAssetsManagerEx_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_extension_EventAssetsManagerEx_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventAssetsManagerEx)");
    return 0;
}

int lua_register_ax_extension_EventAssetsManagerEx(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.EventAssetsManagerEx");
    tolua_cclass(tolua_S,"EventAssetsManagerEx","ax.EventAssetsManagerEx","ax.EventCustom",nullptr);

    tolua_beginmodule(tolua_S,"EventAssetsManagerEx");
        tolua_function(tolua_S,"new",lua_ax_extension_EventAssetsManagerEx_constructor);
        tolua_function(tolua_S,"getEventCode",lua_ax_extension_EventAssetsManagerEx_getEventCode);
        tolua_function(tolua_S,"getCURLECode",lua_ax_extension_EventAssetsManagerEx_getCURLECode);
        tolua_function(tolua_S,"getCURLMCode",lua_ax_extension_EventAssetsManagerEx_getCURLMCode);
        tolua_function(tolua_S,"getMessage",lua_ax_extension_EventAssetsManagerEx_getMessage);
        tolua_function(tolua_S,"getAssetId",lua_ax_extension_EventAssetsManagerEx_getAssetId);
        tolua_function(tolua_S,"getAssetsManagerEx",lua_ax_extension_EventAssetsManagerEx_getAssetsManagerEx);
        tolua_function(tolua_S,"getPercent",lua_ax_extension_EventAssetsManagerEx_getPercent);
        tolua_function(tolua_S,"getPercentByFile",lua_ax_extension_EventAssetsManagerEx_getPercentByFile);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::extension::EventAssetsManagerEx).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.EventAssetsManagerEx";
    g_typeCast[typeName] = "ax.EventAssetsManagerEx";
    return 1;
}

int lua_ax_extension_Manifest_isVersionLoaded(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_isVersionLoaded'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_isVersionLoaded'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isVersionLoaded();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:isVersionLoaded",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_isVersionLoaded'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_isLoaded(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_isLoaded'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_isLoaded'", nullptr);
            return 0;
        }
        auto&& ret = cobj->isLoaded();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:isLoaded",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_isLoaded'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_getPackageUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_getPackageUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_getPackageUrl'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getPackageUrl();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:getPackageUrl",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_getPackageUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_getManifestFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_getManifestFileUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_getManifestFileUrl'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getManifestFileUrl();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:getManifestFileUrl",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_getManifestFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_getVersionFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_getVersionFileUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_getVersionFileUrl'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getVersionFileUrl();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:getVersionFileUrl",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_getVersionFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_getVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_getVersion'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getVersion();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:getVersion",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_Manifest_getSearchPaths(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::Manifest* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.Manifest",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::Manifest*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_Manifest_getSearchPaths'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_Manifest_getSearchPaths'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getSearchPaths();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.Manifest:getSearchPaths",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_Manifest_getSearchPaths'.",&tolua_err);
#endif

    return 0;
}
static int lua_ax_extension_Manifest_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Manifest)");
    return 0;
}

int lua_register_ax_extension_Manifest(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.Manifest");
    tolua_cclass(tolua_S,"Manifest","ax.Manifest","ax.Ref",nullptr);

    tolua_beginmodule(tolua_S,"Manifest");
        tolua_function(tolua_S,"isVersionLoaded",lua_ax_extension_Manifest_isVersionLoaded);
        tolua_function(tolua_S,"isLoaded",lua_ax_extension_Manifest_isLoaded);
        tolua_function(tolua_S,"getPackageUrl",lua_ax_extension_Manifest_getPackageUrl);
        tolua_function(tolua_S,"getManifestFileUrl",lua_ax_extension_Manifest_getManifestFileUrl);
        tolua_function(tolua_S,"getVersionFileUrl",lua_ax_extension_Manifest_getVersionFileUrl);
        tolua_function(tolua_S,"getVersion",lua_ax_extension_Manifest_getVersion);
        tolua_function(tolua_S,"getSearchPaths",lua_ax_extension_Manifest_getSearchPaths);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::extension::Manifest).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.Manifest";
    g_typeCast[typeName] = "ax.Manifest";
    return 1;
}

int lua_ax_extension_AssetsManagerEx_checkUpdate(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_checkUpdate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_checkUpdate'", nullptr);
            return 0;
        }
        cobj->checkUpdate();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:checkUpdate",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_checkUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_update(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_update'", nullptr);
            return 0;
        }
        cobj->update();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:update",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_update'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_downloadFailedAssets(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_downloadFailedAssets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_downloadFailedAssets'", nullptr);
            return 0;
        }
        cobj->downloadFailedAssets();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:downloadFailedAssets",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_downloadFailedAssets'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_getState(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_getState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_getState'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getState();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:getState",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_getState'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_getStoragePath(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_getStoragePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_getStoragePath'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getStoragePath();
        lua_pushlstring(tolua_S,ret.data(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:getStoragePath",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_getStoragePath'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_getLocalManifest(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_getLocalManifest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_getLocalManifest'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getLocalManifest();
        object_to_luaval<ax::extension::Manifest>(tolua_S, "ax.Manifest",(ax::extension::Manifest*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:getLocalManifest",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_getLocalManifest'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_getRemoteManifest(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_getRemoteManifest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_getRemoteManifest'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getRemoteManifest();
        object_to_luaval<ax::extension::Manifest>(tolua_S, "ax.Manifest",(ax::extension::Manifest*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:getRemoteManifest",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_getRemoteManifest'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_getMaxConcurrentTask(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_getMaxConcurrentTask'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_getMaxConcurrentTask'", nullptr);
            return 0;
        }
        auto&& ret = cobj->getMaxConcurrentTask();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:getMaxConcurrentTask",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_getMaxConcurrentTask'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_setMaxConcurrentTask(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_setMaxConcurrentTask'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ax.AssetsManagerEx:setMaxConcurrentTask");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_setMaxConcurrentTask'", nullptr);
            return 0;
        }
        cobj->setMaxConcurrentTask(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:setMaxConcurrentTask",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_setMaxConcurrentTask'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_setVersionCompareHandle(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_setVersionCompareHandle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<int (std::string_view, std::string_view)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_setVersionCompareHandle'", nullptr);
            return 0;
        }
        cobj->setVersionCompareHandle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:setVersionCompareHandle",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_setVersionCompareHandle'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_setVerifyCallback(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::AssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_AssetsManagerEx_setVerifyCallback'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<bool (std::string_view, ax::extension::ManifestAsset)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_setVerifyCallback'", nullptr);
            return 0;
        }
        cobj->setVerifyCallback(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:setVerifyCallback",argc, 1);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_setVerifyCallback'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_AssetsManagerEx_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if _AX_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ax.AssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string_view arg0;
        std::string_view arg1;
        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.AssetsManagerEx:create");
        ok &= luaval_to_std_string_view(tolua_S, 3,&arg1, "ax.AssetsManagerEx:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_create'", nullptr);
            return 0;
        }
        auto&& ret = ax::extension::AssetsManagerEx::create(arg0, arg1);
        object_to_luaval<ax::extension::AssetsManagerEx>(tolua_S, "ax.AssetsManagerEx",(ax::extension::AssetsManagerEx*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ax.AssetsManagerEx:create",argc, 2);
    return 0;
#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_create'.",&tolua_err);
#endif
    return 0;
}
int lua_ax_extension_AssetsManagerEx_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::AssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string_view arg0;
        std::string_view arg1;

        ok &= luaval_to_std_string_view(tolua_S, 2,&arg0, "ax.AssetsManagerEx:AssetsManagerEx");

        ok &= luaval_to_std_string_view(tolua_S, 3,&arg1, "ax.AssetsManagerEx:AssetsManagerEx");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_AssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::AssetsManagerEx(arg0, arg1);
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.AssetsManagerEx");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.AssetsManagerEx:AssetsManagerEx",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_AssetsManagerEx_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_extension_AssetsManagerEx_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AssetsManagerEx)");
    return 0;
}

int lua_register_ax_extension_AssetsManagerEx(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.AssetsManagerEx");
    tolua_cclass(tolua_S,"AssetsManagerEx","ax.AssetsManagerEx","ax.Ref",nullptr);

    tolua_beginmodule(tolua_S,"AssetsManagerEx");
        tolua_function(tolua_S,"new",lua_ax_extension_AssetsManagerEx_constructor);
        tolua_function(tolua_S,"checkUpdate",lua_ax_extension_AssetsManagerEx_checkUpdate);
        tolua_function(tolua_S,"update",lua_ax_extension_AssetsManagerEx_update);
        tolua_function(tolua_S,"downloadFailedAssets",lua_ax_extension_AssetsManagerEx_downloadFailedAssets);
        tolua_function(tolua_S,"getState",lua_ax_extension_AssetsManagerEx_getState);
        tolua_function(tolua_S,"getStoragePath",lua_ax_extension_AssetsManagerEx_getStoragePath);
        tolua_function(tolua_S,"getLocalManifest",lua_ax_extension_AssetsManagerEx_getLocalManifest);
        tolua_function(tolua_S,"getRemoteManifest",lua_ax_extension_AssetsManagerEx_getRemoteManifest);
        tolua_function(tolua_S,"getMaxConcurrentTask",lua_ax_extension_AssetsManagerEx_getMaxConcurrentTask);
        tolua_function(tolua_S,"setMaxConcurrentTask",lua_ax_extension_AssetsManagerEx_setMaxConcurrentTask);
        tolua_function(tolua_S,"setVersionCompareHandle",lua_ax_extension_AssetsManagerEx_setVersionCompareHandle);
        tolua_function(tolua_S,"setVerifyCallback",lua_ax_extension_AssetsManagerEx_setVerifyCallback);
        tolua_function(tolua_S,"create", lua_ax_extension_AssetsManagerEx_create);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::extension::AssetsManagerEx).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.AssetsManagerEx";
    g_typeCast[typeName] = "ax.AssetsManagerEx";
    return 1;
}

int lua_ax_extension_EventListenerAssetsManagerEx_init(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventListenerAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if _AX_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ax.EventListenerAssetsManagerEx",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ax::extension::EventListenerAssetsManagerEx*)tolua_tousertype(tolua_S,1,0);

#if _AX_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ax_extension_EventListenerAssetsManagerEx_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const ax::extension::AssetsManagerEx* arg0;
        std::function<void (ax::extension::EventAssetsManagerEx *)> arg1;

        ok &= luaval_to_object<const ax::extension::AssetsManagerEx>(tolua_S, 2, "ax.AssetsManagerEx",&arg0, "ax.EventListenerAssetsManagerEx:init");

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventListenerAssetsManagerEx_init'", nullptr);
            return 0;
        }
        auto&& ret = cobj->init(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventListenerAssetsManagerEx:init",argc, 2);
    return 0;

#if _AX_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventListenerAssetsManagerEx_init'.",&tolua_err);
#endif

    return 0;
}
int lua_ax_extension_EventListenerAssetsManagerEx_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ax::extension::EventListenerAssetsManagerEx* cobj = nullptr;
    bool ok  = true;

#if _AX_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_ax_extension_EventListenerAssetsManagerEx_constructor'", nullptr);
            return 0;
        }
        cobj = new ax::extension::EventListenerAssetsManagerEx();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ax.EventListenerAssetsManagerEx");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ax.EventListenerAssetsManagerEx:EventListenerAssetsManagerEx",argc, 0);
    return 0;

#if _AX_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_ax_extension_EventListenerAssetsManagerEx_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_ax_extension_EventListenerAssetsManagerEx_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventListenerAssetsManagerEx)");
    return 0;
}

int lua_register_ax_extension_EventListenerAssetsManagerEx(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ax.EventListenerAssetsManagerEx");
    tolua_cclass(tolua_S,"EventListenerAssetsManagerEx","ax.EventListenerAssetsManagerEx","ax.EventListenerCustom",nullptr);

    tolua_beginmodule(tolua_S,"EventListenerAssetsManagerEx");
        tolua_function(tolua_S,"new",lua_ax_extension_EventListenerAssetsManagerEx_constructor);
        tolua_function(tolua_S,"init",lua_ax_extension_EventListenerAssetsManagerEx_init);
    tolua_endmodule(tolua_S);
    auto typeName = typeid(ax::extension::EventListenerAssetsManagerEx).name(); // rtti is literal storage
    g_luaType[reinterpret_cast<uintptr_t>(typeName)] = "ax.EventListenerAssetsManagerEx";
    g_typeCast[typeName] = "ax.EventListenerAssetsManagerEx";
    return 1;
}
TOLUA_API int register_all_ax_extension(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ax",0);
	tolua_beginmodule(tolua_S,"ax");

	lua_register_ax_extension_AssetsManager(tolua_S);
	lua_register_ax_extension_EventAssetsManagerEx(tolua_S);
	lua_register_ax_extension_Manifest(tolua_S);
	lua_register_ax_extension_AssetsManagerEx(tolua_S);
	lua_register_ax_extension_EventListenerAssetsManagerEx(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

