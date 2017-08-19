#ifndef _ETMESSAGEMSG_H_
#define _ETMESSAGEMSG_H_

class CEtMessageMsg {
public:
    virtual ~CEtMessageMsg();
    static CEtMessageMsg &getInstance();
    void setServerInfo(int serverId, int serverType);
    void registration(struct bufferevent *bev);
private:
    CEtMessageMsg();
    int m_serverId;
    int m_serverType;
    struct bufferevent *m_bev;
};

#endif
