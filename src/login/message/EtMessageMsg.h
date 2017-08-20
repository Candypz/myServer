#ifndef _ETMESSAGEMSG_H_
#define _ETMESSAGEMSG_H_

#include <memory>

class CMessageTool;
class CEtMessageMsg {
public:
    virtual ~CEtMessageMsg();
    static CEtMessageMsg &getInstance();
    void setServerInfo(int serverId, int serverType);
    void registration(struct bufferevent *bev);
    bool send(int cmd, const char *data, int len);
private:
    CEtMessageMsg();
    int m_serverId;
    int m_serverType;
    struct bufferevent *m_bev;
    std::shared_ptr<CMessageTool> m_messageTool;
};

#endif
