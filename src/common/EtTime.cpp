#include "EtTime.h"
#include "EtEventBase.h"
#include <chrono>
#include <event.h>
#include <event2/event.h>

CEtTime::CEtTime() {

}

CEtTime::~CEtTime() {

}

struct tm* CEtTime::time(const long &ti) {
    struct tm* ptm = localtime(&ti);
    return ptm;
}

struct tm* CEtTime::time() {
    auto _t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    struct tm* ptm = localtime(&_t);
    return ptm;
}

long CEtTime::now() {
    return std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}
