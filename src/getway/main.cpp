#include "EtLog.h"
#include "EtNetBase.h"
#include "Common.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    rapidjson::Document _doc;
    if (Common::loadJsonFile(_doc, "jsonCfg/getWay.json")) {
        auto &_port = _doc["port"];
        std::shared_ptr<CEtNetBase> _net(new CEtNetBase(_port.GetInt()));
        _net->run();
    }

    return 0;
}
