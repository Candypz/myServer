#include "EtLog.h"

CETLog::CETLog() {

}

CETLog::~CETLog() {

}

void CETLog::createLogFile(const std::string name) {
    auto _log = spdlog::daily_logger_mt(name, "log/" + name, 3, 30);
#ifdef _DEBUG
    _log->flush_on(spdlog::level::info);
#else
    _log->flush_on(spdlog::level::err);
    _log->set_level(spdlog::level::info);
#endif
}
