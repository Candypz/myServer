#include "MessageTool.h"
#include "MessageBase.pb.h"

CMessageTool::CMessageTool(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
}

CMessageTool::~CMessageTool() {

}

std::string CMessageTool::createMessage(int cmd, const char *data, int len) {
    auto _head = new MsgHeader();
    _head->set_server_id(m_serverId);
    _head->set_server_type(m_serverType);

    Message _msg;
    _msg.set_allocated_header(_head);
    _msg.set_content(data);
    _msg.set_cmd(cmd);
    std::string _buff;
    _msg.SerializePartialToString(&_buff);

    return _buff;
}
