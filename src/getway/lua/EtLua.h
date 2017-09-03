#ifndef _ETLUA_H_
#define _ETLUA_H_

extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}
#include <string>

class CETLog;
class CEtLua {
public:
    static CEtLua &getInstance();
    virtual ~CEtLua();
    void init();
    bool reloadLua(std::string luafile);
private:
    CEtLua();
    void addSearchPath(const char* path);
    void registrationFunc();
    lua_State *m_lua;
};

#endif
