#ifndef _ETCLIENTMESSAGE_H_
#define _ETCLIENTMESSAGE_H_

#include <memory>
#include <event2/bufferevent.h>
#include "GameMessage.pb.h"

class CEtClientMessage :public std::enable_shared_from_this<CEtClientMessage> {
public:
    CEtClientMessage(evutil_socket_t fd, const char *data, size_t len);
    ~CEtClientMessage();
    void work();
private:
    evutil_socket_t m_fd;
    CMessage *m_head;
};

#endif
