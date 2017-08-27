#include "EtBuffer.h"
#include "MessageCmd.h"
#include "EtTime.h"
#include "EtEventBase.h"

#include <event2/buffer.h>
#include <event2/event.h>
#include <event2/bufferevent.h>

CEtBuffer::CEtBuffer(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
    m_head = new MsgHeader();
}

CEtBuffer::~CEtBuffer() {

}

const char *CEtBuffer::create(int cmd, const char *data, int *len) {
    m_head->set_server_id(m_serverId);
    m_head->set_server_type(m_serverType);
    m_head->set_time_stamp(CEtTime::now());

    m_msg.set_allocated_header(m_head);
    m_msg.set_content(data);
    m_msg.set_cmd(cmd);
    std::string _buff;
    m_msg.SerializePartialToString(&_buff);

    Msg::PackageHead _pack;
    _pack.size = _buff.size() + sizeof(_pack);

    evbuffer_add(CEtEventBase::getInstance().getEvBuffer(), &_pack, sizeof(_pack));
    evbuffer_add(CEtEventBase::getInstance().getEvBuffer(), _buff.c_str(), _buff.size());

    char _etBuf[128] = {};
    
    *len = evbuffer_get_length(CEtEventBase::getInstance().getEvBuffer());

    evbuffer_remove(CEtEventBase::getInstance().getEvBuffer(), _etBuf, evbuffer_get_length(CEtEventBase::getInstance().getEvBuffer()));
    
    return _etBuf;
}
