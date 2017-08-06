#include <utility>

#include <event.h>
#include <event2/event.h>
#include <event2/bufferevent.h>

#include "EtClientBase.h"
#include "EtClientMag.h"
#include "EtLog.h"

CEtClientBase::CEtClientBase(int pid, struct bufferevent *bev) {
    m_pid = pid;
    m_bev = std::move(bev);
    m_heartbeatFlag = false;
}

CEtClientBase::~CEtClientBase() {

}

int CEtClientBase::getPid() {
    return m_pid;
}

int CEtClientBase::send(short cmd, const char *data, int len) {
    if (m_bev) {
        auto _data =  encode(cmd, data, len);
        if (_data) {
            bufferevent_write(m_bev, _data, len);
        }
    }
}

void CEtClientBase::decode(const char *data, int len) {

}

const char *CEtClientBase::encode(short cmd, const char *data, int len)const {
    return "111";
}

void CEtClientBase::heartbeatCb() {
    send(11, "111", sizeof("111"));
    listenHeartbeat();
}

void CEtClientBase::listenHeartbeat() {
    struct event *_evTime;
    struct timeval _time = {5, 0};
    _evTime = event_new(m_bev->ev_base, m_pid, EV_ET, [](int fd, short event, void *arg){
        CEtClientMag::heartbeat(fd);
    }, event_self_cbarg());
    event_add(_evTime, &_time);
}
