#include "EtMessageMsg.h"
#include "ServerBase.pb.h"
#include "EtTime.h"
#include "MessageTool.h"

#include <event2/bufferevent.h>

CEtMessageMsg::CEtMessageMsg():m_bev(nullptr) {

}

CEtMessageMsg::~CEtMessageMsg() {

}

CEtMessageMsg &CEtMessageMsg::getInstance() {
    static CEtMessageMsg _instance;
    return _instance;
}

void CEtMessageMsg::setServerInfo(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
    m_messageTool = std::shared_ptr<CMessageTool>(new CMessageTool(m_serverId, m_serverType));
}

bool CEtMessageMsg::send(int cmd, const char *data, int len) {
    if (m_bev) {
        auto _buff = m_messageTool->createMessage(cmd, data, len);
        bufferevent_write(m_bev, _buff.c_str(), _buff.size());
        return true;
    }
    else {
        return false;
    }
}

void CEtMessageMsg::registration(struct bufferevent *bev) {
    m_bev = bev;

    Registration_Req _req;
    _req.set_registration_time(CEtTime::now());
    std::string _buff;
    _req.SerializePartialToString(&_buff);
    send(1, _buff.c_str(), _buff.size());
}
