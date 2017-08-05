#include <utility>

#include <event2/event.h>
#include <event2/bufferevent.h>

#include "EtClientBase.h"

CEtClientBase::CEtClientBase(int pid, struct bufferevent *bev) {
    m_pid = pid;
    m_bev = std::move(bev);
}

CEtClientBase::~CEtClientBase() {

}

int CEtClientBase::getPid() {
    return m_pid;
}

int CEtClientBase::send(short cmd, const char *data) {
    if (m_bev) {
        bufferevent_write(m_bev, data, sizeof(data));
    }
}
