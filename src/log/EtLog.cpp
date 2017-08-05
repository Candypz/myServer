#include "EtLog.h"

CETLog::CETLog() {

}

CETLog::~CETLog() {

}

void CETLog::createLogFile() {
    auto _log = spdlog::daily_logger_mt(LOGNAME, LOGPATH, 3, 30);
#ifdef _DEBUG
    _log->flush_on(spdlog::level::info);
#else
    _log->flush_on(spdlog::level::err);
    _log->set_level(spdlog::level::info);
#endif
    LOG_CRIT("start getway server");
}
