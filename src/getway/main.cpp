#include "EtLog.h"
#include "EtNetBase.h"
#include "Common.h"

int main() {
    std::shared_ptr<CETLog> _log(new CETLog);
    _log->createLogFile();

    rapidjson::Document _doc;
    if (Common::loadJsonFile(_doc, "jsonCfg/getWay.json")) {
        std::shared_ptr<CEtNetBase> _net(new CEtNetBase(_doc["port"].GetInt(), _doc["addr"].GetString()));
        _net->run();
    }

    return 0;
}
