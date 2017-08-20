#include "EtEventBase.h"

#include <event2/thread.h>
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
    evthread_use_pthreads();
    m_base = event_base_new();
    evthread_make_base_notifiable(m_base);
}

bool CEtEventBase::run() {
    event_base_dispatch(m_base);
    return true;
}
