#ifndef _ETBUFFER_H_
#define _ETBUFFER_H_

#include "MessageBase.pb.h"

class CEtBuffer :public std::enable_shared_from_this<CEtBuffer> {
public:
    CEtBuffer(int serverId, int serverType);
    virtual ~CEtBuffer();
    const char *create(int cmd, const char *data, int *len);
private:
    int m_serverId;
    int m_serverType;
    MsgHeader *m_head;
    Message m_msg;
};

#endif
