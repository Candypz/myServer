#include "EtLua.h"
#include "EtLog.h"
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
    luaL_dofile(m_lua, "../../lua/main.lua");
}

void CEtLua::addSearchPath(const char* path)
{
    lua_getglobal(m_lua, "package");                                  /* L: package */
    lua_getfield(m_lua, -1, "path");                /* get package.path, L: package path */
    const char* cur_path =  lua_tostring(m_lua, -1);
    lua_pushfstring(m_lua, "%s;%s/?.lua", cur_path, path);            /* L: package path newpath */
    lua_setfield(m_lua, -3, "path");          /* package.path = newpath, L: package path */
    lua_pop(m_lua, 2);                                                /* L: - */
}
