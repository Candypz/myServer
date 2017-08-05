#include <iostream>
#include <spdlog/spdlog.h>

#define LOGNAME "getway"
#define LOGPATH "log/getway"
#define LOG_TRACE spdlog::get(LOGNAME)->trace
#define LOG_DEBUG spdlog::get(LOGNAME)->debug
#define LOG_INFO  spdlog::get(LOGNAME)->info
#define LOG_WARN  spdlog::get(LOGNAME)->warn
#define LOG_ERR   spdlog::get(LOGNAME)->error
#define LOG_CRIT  spdlog::get(LOGNAME)->critical

class CETLog {
public:
    CETLog();
    ~CETLog();
    void createLogFile();
};
