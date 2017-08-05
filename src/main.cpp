#include "log/EtLog.h"
#include "net/EtNetBase.h"


// void onTime(int sock, short event, void *arg) {
//     LOG_INFO("@@@@@@@@@{0}", 1);
//
//     struct timeval tv;
//     tv.tv_sec = 1;
//     tv.tv_usec = 0;
//
//     event_add((struct event*)arg, &tv);
// }

int main() {

    // event_init();

    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    std::shared_ptr<CEtNetBase> _net(new CEtNetBase);

    _net->run();

    // struct event evTime;
    // evtimer_set(&evTime, onTime, &evTime);
    //
    // struct timeval tv;
    // tv.tv_sec = 1;
    // tv.tv_usec = 0;
    //
    // event_add(&evTime, &tv);
    //
    // event_dispatch();

    return 0;
}
