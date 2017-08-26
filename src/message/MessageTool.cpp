#include "MessageTool.h"
#include "EtBuffer.h"

CMessageTool::CMessageTool(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
}

CMessageTool::~CMessageTool() {

}

std::string CMessageTool::createMessage(int cmd, const char *data, int len) {
    // auto _head = new MsgHeader();
    // _head->set_server_id(m_serverId);
    // _head->set_server_type(m_serverType);
    //
    // Message _msg;
    // _msg.set_allocated_header(_head);
    // _msg.set_content(data);
    // _msg.set_cmd(cmd);
     std::string _buff;
    // _msg.SerializePartialToString(&_buff);
    //
    // Msg::PackageHead *_pack;
    // _pack->size = _buff.size() + sizeof(_pack);
    //
    // struct evbuffer* buff = evbuffer_new();
    // evbuffer_add(buff, _pack, sizeof(_pack));
    // evbuffer_add(buff, _buff.c_str(), _buff.size());
    //
    //
    //
    // evbuffer_free(buff);

    std::shared_ptr<CEtBuffer> _etBuff(new CEtBuffer(m_serverId, m_serverType));

    //return _buff;
    return _etBuff->create(cmd, data);
}
