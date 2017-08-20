#include "EtEventBase.h"

#include <event2/event.h>

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
}

bool CEtEventBase::run() {
    event_base_dispatch(m_base);
    return true;
}
