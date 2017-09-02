#include "EtLog.h"
#include "EtNetBase.h"
#include "Common.h"
#include "EtEventBase.h"
#include "EtReadBuffer.h"
#include "EtTimer.h"
#include "EtLua.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    CEtEventBase::getInstance().init();
    CEtReadBuffer::getInstance().callBack = [](const auto data, auto len) {
        LOG_CRIT("call back {0},{1}", len, data);
    };

    CEtLua::getInstance().init();

    rapidjson::Document _doc;
    if (Common::loadJsonFile(_doc, "jsonCfg/getWay.json")) {
        std::shared_ptr<CEtNetBase> _net(new CEtNetBase(_doc["port"].GetInt(), _doc["addr"].GetString()));
        _net->run();
    }

    if (CEtEventBase::getInstance().run()) {
        LOG_CRIT("server close");
    }

    return 0;
}
