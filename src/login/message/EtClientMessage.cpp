#include "EtClientMessage.h"
#include "EtLog.h"

CEtClientMessage::CEtClientMessage(evutil_socket_t fd, const char *data, size_t len) {
    m_fd = fd;
    m_head = new CMessage();
    m_head->ParseFromArray(data, len);
}

CEtClientMessage::~CEtClientMessage() {

}

void CEtClientMessage::work() {

}
