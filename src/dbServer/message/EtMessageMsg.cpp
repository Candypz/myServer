#include "EtMessageMsg.h"
#include "MessageBase.pb.h"
#include "SMsgBaseS.pb.h"
#include "EtTime.h"

#include <event2/bufferevent.h>

CEtMessageMsg::CEtMessageMsg() {

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
}

void CEtMessageMsg::registration(struct bufferevent *bev) {
    m_bev = bev;

    auto _head = new MsgHeader();
    _head->set_server_id(m_serverId);
    _head->set_server_type(m_serverType);

    Registration_Req _req;
    _req.set_registration_time(CEtTime::now());
    std::string __buff;
    _req.SerializePartialToString(&__buff);

    Message _msg;
    _msg.set_allocated_header(_head);
    _msg.set_content(__buff);
    _msg.set_cmd(1);
    std::string _buff;
    _msg.SerializePartialToString(&_buff);


    bufferevent_write(m_bev, _buff.c_str(), _msg.ByteSize());



}
