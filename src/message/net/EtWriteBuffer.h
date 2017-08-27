#ifndef _ETWRITEBUFFER_H_
#define _ETWRITEBUFFER_H_

#include "MessageBase.pb.h"
#include "MessageCmd.h"

class CEtWriteBuffer :public std::enable_shared_from_this<CEtWriteBuffer> {
public:
    CEtWriteBuffer(int serverId, int serverType);
    virtual ~CEtWriteBuffer();
    void create(int cmd, const char *data);
    size_t getSize();
    const char *getData();
private:
    int m_serverId;
    int m_serverType;
    MsgHeader *m_head;
    Message m_msg;
    char m_etBuf[MSG_MAX_LINE] = {};
    size_t m_size = 0;
};

#endif
