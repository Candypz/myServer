#include "EtClientMessage.h"
#include "EtLog.h"

CEtClientMessage::CEtClientMessage(evutil_socket_t fd, const char *data, size_t len) {
    m_fd = fd;
    m_head = new CMessage();
    m_head->ParseFromArray(data, len);
    CRegistration_Req _content;
    _content.ParseFromString(m_head->content());
    LOG_CRIT("{0} {1} {2} {3}", m_head->sn(), m_head->cmd(), _content.account(), _content.password());
}

CEtClientMessage::~CEtClientMessage() {

}

void CEtClientMessage::work() {

}
