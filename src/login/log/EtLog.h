#ifndef _ETLOG_H_
#define _ETLOG_H_

#include <iostream>
#include <spdlog/spdlog.h>

#define CONSOLENAME "console"
#define LOGNAME "login"
#define LOGPATH "log/login"

#ifdef _DEBUG
    #define LOG_TRACE(fmt, ...)\
            spdlog::get(LOGNAME)->trace(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->trace(fmt, ##__VA_ARGS__);

    #define LOG_DEBUG(fmt, ...)\
            spdlog::get(LOGNAME)->debug(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->debug(fmt, ##__VA_ARGS__);

    #define LOG_INFO(fmt, ...)\
            spdlog::get(LOGNAME)->info(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->info(fmt, ##__VA_ARGS__);

    #define LOG_WARN(fmt, ...)\
            spdlog::get(LOGNAME)->warn(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->warn(fmt, ##__VA_ARGS__);

    #define LOG_ERR(fmt, ...)\
            spdlog::get(LOGNAME)->error(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->error(fmt, ##__VA_ARGS__);

    #define LOG_CRIT(fmt, ...)\
            spdlog::get(LOGNAME)->critical(fmt, ##__VA_ARGS__);\
            spdlog::get(CONSOLENAME)->critical(fmt, ##__VA_ARGS__);
#else
    #define LOG_TRACE(fmt, ...)\
            spdlog::get(LOGNAME)->trace(fmt, ##__VA_ARGS__);
    #define LOG_DEBUG(fmt, ...)\
            spdlog::get(LOGNAME)->debug(fmt, ##__VA_ARGS__);
    #define LOG_INFO(fmt, ...)\
            spdlog::get(LOGNAME)->info(fmt, ##__VA_ARGS__);
    #define LOG_WARN(fmt, ...)\
            spdlog::get(LOGNAME)->warn(fmt, ##__VA_ARGS__);
    #define LOG_ERR(fmt, ...)\
            spdlog::get(LOGNAME)->error(fmt, ##__VA_ARGS__);
    #define LOG_CRIT(fmt, ...)\
            spdlog::get(LOGNAME)->critical(fmt, ##__VA_ARGS__);
#endif

class CETLog {
public:
    CETLog();
    ~CETLog();
    void createLogFile();
};

#endif
