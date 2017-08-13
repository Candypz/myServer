#ifndef _ETCLIENTBASE_H_
#define _ETCLIENTBASE_H_

#include <functional>

class CEtClientBase {
public:
    CEtClientBase(int pid, struct bufferevent *bev);
    ~CEtClientBase();
    int getPid();
    int send(short cmd, const char *data, int len);
    void decode(const char *data, int len);
    void listenHeartbeat();
    void heartbeatCb();
private:
    const char *encode(short cmd, const char *data, int len)const;
    int m_fd;
    bufferevent *m_bev;
};

#endif
