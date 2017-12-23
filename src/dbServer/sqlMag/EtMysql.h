#ifndef _ETMYSQL_H_
#define _ETMYSQL_H_

class CEtMysql {
public:
    ~CEtMysql();
    static CEtMysql &getInstance();
    bool connect();
private:
    CEtMysql();
    bool loadCfg();
};

#endif
