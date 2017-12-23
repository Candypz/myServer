#include "EtMysql.h"
#include "EtLog.h"

CEtMysql::~CEtMysql() {

}

CEtMysql::CEtMysql() {
    LOG_CRIT("mysql init");
}

CEtMysql &CEtMysql::getInstance() {
    static CEtMysql _instance;
    return _instance;
}

bool CEtMysql::loadCfg() {
    return false;
}

bool CEtMysql::connect() {
    if(!loadCfg()) {
        LOG_ERR("load file error");
        return false;
    }
    
    return true;
}
