#include "EtLog.h"

CETLog::CETLog() {

}

CETLog::~CETLog() {

}

void CETLog::createLogFile() {
    auto _log = spdlog::daily_logger_mt(LOGNAME, LOGPATH, 3, 30);
#ifdef _DEBUG
    auto _console = spdlog::stdout_color_mt(CONSOLENAME);
    _log->flush_on(spdlog::level::debug);
    _console->flush_on(spdlog::level::debug);
#else
    _log->flush_on(spdlog::level::err);
    _log->set_level(spdlog::level::info);
#endif
    LOG_CRIT("start getway server");
}
