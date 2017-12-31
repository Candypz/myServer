#include "EtReadBuffer.h"
#include "EtEventBase.h"

#include <event2/buffer.h>
#include <event2/event.h>
#include <event2/bufferevent.h>

CEtReadBuffer &CEtReadBuffer::getInstance() {
    static CEtReadBuffer _instance;
    return _instance;
}

CEtReadBuffer::~CEtReadBuffer() {

}

bool CEtReadBuffer::read(evutil_socket_t fd, const char *data, size_t len) {
    evbuffer_add(CEtEventBase::getInstance().getReadBuffer(), data, len);
    auto _buffSize = evbuffer_get_length(CEtEventBase::getInstance().getReadBuffer());
    if (_buffSize < sizeof(Msg::PackageHead)) {
        return false;
    }
    char _buf[10] = {};
    evbuffer_copyout(CEtEventBase::getInstance().getReadBuffer(), &_buf, sizeof(Msg::PackageHead));

    auto _tempHead = ((Msg::PackageHead *) _buf);
    if (_tempHead->serverPid != MSG_SERVER_PID) {
        evbuffer_drain(CEtEventBase::getInstance().getReadBuffer(), _buffSize);
        return false;
    }

    auto _size = _tempHead->size;
    if (_size > _buffSize) {
        return false;
    }

    char _readBuff[MSG_MAX_LINE] = {};
    auto _lenSize = _size - sizeof(Msg::PackageHead);
    evbuffer_drain(CEtEventBase::getInstance().getReadBuffer(), sizeof(Msg::PackageHead));
    evbuffer_remove(CEtEventBase::getInstance().getReadBuffer(), &_readBuff, _lenSize);

    if (callBack) {
        callBack(_readBuff, _lenSize, fd);
    }

    return true;
}
