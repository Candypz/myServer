#ifndef _ETREADBUFFER_H_
#define _ETREADBUFFER_H_

#include <functional>
#include <event2/event.h>

#include "../MessageCmd.h"

class CEtReadBuffer {
public:
    CEtReadBuffer() = default;
    CEtReadBuffer(const CEtReadBuffer&) = default;
    static CEtReadBuffer &getInstance();
    bool read(evutil_socket_t fd, const char *data, size_t len);
    std::function<void (const char *data, size_t len, evutil_socket_t fd)> callBack = nullptr;
    virtual ~CEtReadBuffer();
};

#endif
