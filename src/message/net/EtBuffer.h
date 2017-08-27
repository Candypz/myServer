#ifndef _ETBUFFER_H_
#define _ETBUFFER_H_

#include "MessageBase.pb.h"

class CEtBuffer :public std::enable_shared_from_this<CEtBuffer> {
public:
    CEtBuffer(int serverId, int serverType);
    virtual ~CEtBuffer();
    void create(int cmd, const char *data);
    size_t getSize();
    const char *getData();
private:
    int m_serverId;
    int m_serverType;
    MsgHeader *m_head;
    Message m_msg;
    char m_etBuf[125] = {};
    size_t m_size = 0;
};

#endif
