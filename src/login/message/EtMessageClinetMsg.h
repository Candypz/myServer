#ifndef _ETMESSAGECLINETMSG_H_
#define _ETMESSAGECLINETMSG_H_

#include <event2/bufferevent.h>

class CMessageTool;
class CEtMessageClinetMsg {
public:
    ~CEtMessageClinetMsg();
    static CEtMessageClinetMsg &getInstance();
    void pickupMessage(evutil_socket_t fd, const char *data, size_t len);
private:
    CEtMessageClinetMsg();
};

#endif
