#include "EtEventBase.h"

#include <event2/event.h>
#include <event2/bufferevent.h>
#include <event2/buffer.h>

struct event_base* CEtEventBase::m_base = nullptr;

CEtEventBase::CEtEventBase() {

}

CEtEventBase::~CEtEventBase() {

}

CEtEventBase &CEtEventBase::getInstance() {
    static CEtEventBase _instance;
    return _instance;
}

void CEtEventBase::init() {
    m_base = event_base_new();
    m_readBuff = evbuffer_new();
    m_writeBuff = evbuffer_new();
}

bool CEtEventBase::run() {
    event_base_dispatch(m_base);
    return true;
}

struct evbuffer* CEtEventBase::getReadBuffer() {
    return m_readBuff;
}

struct evbuffer* CEtEventBase::getWriteBuffer() {
    return m_writeBuff;
}
