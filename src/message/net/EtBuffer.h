#ifndef _ETBUFFER_H_
#define _ETBUFFER_H_

#include "MessageBase.pb.h"

#include <event2/event.h>
#include <event2/bufferevent.h>
#include <event2/buffer.h>

class CEtBuffer :public std::enable_shared_from_this<CEtBuffer> {
public:
    CEtBuffer(int serverId, int serverType);
    virtual ~CEtBuffer();
    std::string create(int cmd, const char *data);
private:
    int m_serverId;
    int m_serverType;
    MsgHeader *m_head;
    Message m_msg;
    struct evbuffer* m_buff;
};

#endif
