#include "EtLog.h"
#include "EtNetBase.h"
#include "EtClientNetBase.h"
#include "Common.h"

#include <thread>

void startClientNet() {

}

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    std::thread _t([]{
        std::shared_ptr<CEtClientNetBase> _client(new CEtClientNetBase());
        if (_client->init()) {
            _client->run();
        }
    });

    rapidjson::Document _doc;
    if (Common::loadJsonFile(_doc, "jsonCfg/login.json")) {
        auto &_port = _doc["port"];
        auto &_addr = _doc["addr"];
        std::shared_ptr<CEtNetBase> _net(new CEtNetBase(_port.GetInt(), _addr.GetString()));
        _net->run();
    }

    return 0;
}
