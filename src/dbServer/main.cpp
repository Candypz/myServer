#include "EtLog.h"
#include "EtNetBase.h"
#include "Common.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    std::shared_ptr<CEtNetBase> _net(new CEtNetBase());
    if (_net->init()) {
        _net->run();
    }
    
    return 0;
}
