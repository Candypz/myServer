#include "EtLog.h"
#include "EtNetBase.h"
#include "Common.h"
#include "EtEventBase.h"
#include "EtMysql.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    CEtEventBase::getInstance().init();

    CEtMysql::getInstance().connect();

    std::shared_ptr<CEtNetBase> _net(new CEtNetBase());
    if (_net->init()) {
        _net->run();
    }

    if (CEtEventBase::getInstance().run()) {
        LOG_CRIT("server close");
    }

    return 0;
}
