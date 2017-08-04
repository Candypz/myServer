#include <iostream>
#include <event.h>
#include "log/EtLog.h"

#define LOGNAME "getway"
#define LOG_INFO spdlog::get(LOGNAME)->info
#define LOG_WARN spdlog::get(LOGNAME)->warn
#define LOG_ERR  spdlog::get(LOGNAME)->error
#define LOG_CRIT spdlog::get(LOGNAME)->critical

void onTime(int sock, short event, void *arg) {
    std::cout << "@@@@" << std::endl;

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;

    event_add((struct event*)arg, &tv);
}

int main() {

    event_init();

    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile(LOGNAME);
    LOG_CRIT("start getway server");

    struct event evTime;
    evtimer_set(&evTime, onTime, &evTime);

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;

    event_add(&evTime, &tv);

    event_dispatch();

    return 0;
}
