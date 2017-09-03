#include "EtLua.h"
#include "EtLog.h"
#include "EtTime.h"
#include "EtTimer.h"
#include "LuaBridge/LuaBridge.h"
#include <iostream>

CEtLua &CEtLua::getInstance() {
    static CEtLua _instance;
    return _instance;
}

CEtLua::CEtLua() {
    m_lua = nullptr;
}

CEtLua::~CEtLua() {

}

void CEtLua::init() {
    m_lua = luaL_newstate();
    luaL_openlibs(m_lua);
    addSearchPath("../../lua/");
    registrationFunc();
    reloadLua("init.lua");
}

bool CEtLua::reloadLua(std::string luafile) {
    luafile = "../../lua/" + luafile;
    auto _status = luaL_dofile(m_lua, luafile.c_str());
    if (_status != LUA_OK) {
        LOG_ERR("[LUA ERROR] {0}", lua_tostring(m_lua, - 1));
        return false;
    }
    return true;
}

void CEtLua::addSearchPath(const char* path) {
    lua_getglobal(m_lua, "package");                                  /* L: package */
    lua_getfield(m_lua, -1, "path");                                  /* get package.path, L: package path */
    const char* cur_path =  lua_tostring(m_lua, -1);
    lua_pushfstring(m_lua, "%s;%s/?.lua", cur_path, path);            /* L: package path newpath */
    lua_setfield(m_lua, -3, "path");                                  /* package.path = newpath, L: package path */
    lua_pop(m_lua, 2);                                                /* L: - */
}

void CEtLua::registrationFunc() {
    using namespace luabridge;
    getGlobalNamespace(m_lua)
    .beginClass<CEtTime>("CEtTime")
    .addStaticFunction("now", &CEtTime::now)
    .endClass();
}
