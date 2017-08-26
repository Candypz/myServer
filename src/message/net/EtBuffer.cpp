#include "EtBuffer.h"
#include "MessageCmd.h"
#include "EtTime.h"
#include "EtEventBase.h"

#include <event2/buffer.h>

CEtBuffer::CEtBuffer(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
    m_head = new MsgHeader();
}

CEtBuffer::~CEtBuffer() {

}

std::string CEtBuffer::create(int cmd, const char *data) {
    m_head->set_server_id(m_serverId);
    m_head->set_server_type(m_serverType);
    m_head->set_time_stamp(CEtTime::now());

    m_msg.set_allocated_header(m_head);
    m_msg.set_content(data);
    m_msg.set_cmd(cmd);
    std::string _buff;
    m_msg.SerializePartialToString(&_buff);

    Msg::PackageHead *_pack;
    _pack->size = _buff.size() + sizeof(_pack);

    evbuffer_add(CEtEventBase::m_buff, _pack, sizeof(_pack));
    evbuffer_add(CEtEventBase::m_buff, _buff.c_str(), _buff.size());

    char *_etBuf;

    evbuffer_remove(CEtEventBase::m_buff, &_etBuf, evbuffer_get_length(CEtEventBase::m_buff));

    return _etBuf;
}
