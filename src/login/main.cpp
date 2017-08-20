#include "EtLog.h"
#include "EtNetBase.h"
#include "EtClientNetBase.h"
#include "Common.h"
#include "EtEventBase.h"

#include <thread>

void startClientNet() {

}

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    CEtEventBase::getInstance().init();

    std::thread _t([]{
        std::shared_ptr<CEtClientNetBase> _client(new CEtClientNetBase());
        if (_client->init()) {
            _client->run();
        }
    });

    rapidjson::Document _doc;
    if (Common::loadJsonFile(_doc, "jsonCfg/login.json")) {
        std::shared_ptr<CEtNetBase> _net(new CEtNetBase(_doc["port"].GetInt(), _doc["addr"].GetString()));
        _net->run();
    }

    if (CEtEventBase::getInstance().run()) {
        LOG_CRIT("server close");
    }

    return 0;
}
