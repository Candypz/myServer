#ifndef _MESSAGETOOL_H
#define _MESSAGETOOL_H

#include "MessageCmd.h"
#include <memory>

class CMessageTool :public std::enable_shared_from_this<CMessageTool> {
public:
    CMessageTool(int serverId, int serverType);
    virtual ~CMessageTool();
    const char *createMessage(int cmd, const char *data, size_t *len);
private:
    int m_serverId;
    int m_serverType;
};

#endif
