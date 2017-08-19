#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>
#include <functional>
#include <arpa/inet.h>

#include <event2/event.h>
#include <event2/bufferevent.h>

#include "EtLog.h"
#include "EtNetBase.h"

#define LISTEN_BACKLOG 32
#define MAX_LINE    256

CEtNetBase::CEtNetBase(int port, std::string addr) {
    m_port = port;
    m_addr = addr;
}

CEtNetBase::~CEtNetBase() {

}

void do_Accept(evutil_socket_t listener, short event, void *arg) {
    LOG_INFO("connect getway ok")
}

void read_cb(struct bufferevent *bev, void *arg) {
    char _line[MAX_LINE+1];
    int _n;
    evutil_socket_t _fd = bufferevent_getfd(bev);

    while (_n = bufferevent_read(bev, _line, MAX_LINE), _n > 0) {
       _line[_n] = '\0';

       LOG_DEBUG("fd = {0}, read line size: {1}", _fd, _n);
       //bufferevent_write(bev, _line, _n);
    }
}

void write_cb(struct bufferevent *bev, void *arg) {
    evutil_socket_t fd = bufferevent_getfd(bev);
    LOG_INFO("{0}", fd);
}

void error_cb(struct bufferevent *bev, short event, void *arg) {
    evutil_socket_t fd = bufferevent_getfd(bev);
    if (event & BEV_EVENT_TIMEOUT) {
        LOG_ERR("Timed out"); //if bufferevent_set_timeouts() called
    }
    else if (event & BEV_EVENT_EOF) {
        LOG_ERR("connection closed");
    }
    else if (event & BEV_EVENT_ERROR) {
        LOG_ERR("some other error");
    }
    bufferevent_free(bev);
}

int CEtNetBase::run() {
    struct event_base *_base = event_base_new();
    struct bufferevent *_bev = bufferevent_socket_new(_base, -1, BEV_OPT_CLOSE_ON_FREE);
    assert(_base != NULL);

    struct sockaddr_in _sin;
    _sin.sin_family = AF_INET;
    _sin.sin_addr.s_addr = inet_addr(m_addr.c_str());
    _sin.sin_port = htons(m_port);

    struct event *_listen_event;
    _listen_event = event_new(_base, STDIN_FILENO, EV_READ|EV_PERSIST, do_Accept, (void*)_base);
    event_add(_listen_event, NULL);

    bufferevent_socket_connect(_bev, (struct sockaddr *)&_sin, sizeof(_sin));
    bufferevent_setcb(_bev, read_cb, write_cb, error_cb, (void *)_listen_event);
    bufferevent_enable(_bev, EV_READ|EV_PERSIST);
    event_base_dispatch(_base);

    return 0;
}
