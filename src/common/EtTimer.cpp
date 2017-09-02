#include "EtTimer.h"
#include "EtEventBase.h"

#include <event.h>
#include <event2/event.h>
#include <event2/bufferevent.h>


void CEtTimer::delayTime(int seconds, void (*fun)(int fd, short event, void *arg)) {
    struct event *_evTime;
    struct timeval _time = {seconds, 0};
    _evTime = evtimer_new(CEtEventBase::m_base, fun, NULL);
    event_add(_evTime, &_time);
}

void CEtTimer::loopAtonce(int seconds, void (*fun)(int fd, short event, void *arg)) {
    struct event *_evTime;
    struct timeval _time = {seconds, 0};
    _evTime = event_new(CEtEventBase::m_base, -1, EV_TIMEOUT|EV_PERSIST, fun, event_self_cbarg());
    event_add(_evTime, &_time);
}
