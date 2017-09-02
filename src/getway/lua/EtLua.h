#ifndef _ETLUA_H_
#define _ETLUA_H_

extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

class CETLog;
class CEtLua {
public:
    static CEtLua &getInstance();
    virtual ~CEtLua();
    void init();
private:
    CEtLua();
    void addSearchPath(const char* path);
    lua_State *m_lua;
};

#endif
