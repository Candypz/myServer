#include "log/EtLog.h"
#include "net/EtNetBase.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    std::shared_ptr<CEtNetBase> _net(new CEtNetBase);
    _net->run();

    return 0;
}
