#include "EtNetBase.h"
#include "EtLog.h"

#define LISTEN_POINT 2819
#define LISTEN_BACKLOG 32
#define MAX_LINE    256

CEtNetBase::CEtNetBase() {

}

CEtNetBase::~CEtNetBase() {
    
}

void read_cb(struct bufferevent *bev, void *arg) {
    char _line[MAX_LINE+1];
    int _n;
    evutil_socket_t _fd = bufferevent_getfd(bev);

    while (_n = bufferevent_read(bev, _line, MAX_LINE), _n > 0) {
       _line[_n] = '\0';
       printf("fd=%u, read line: %s\n", _fd, _line);

       bufferevent_write(bev, _line, _n);
    }
}

void write_cb(struct bufferevent *bev, void *arg) {

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

void do_Accept(evutil_socket_t listener, short event, void *arg) {
    struct event_base *_base = (struct event_base *)arg;
    evutil_socket_t _fd;
    struct sockaddr_in _sin;
    socklen_t _slen;
    _fd = accept(listener, (struct sockaddr *)&_sin, &_slen);
    if (_fd < 0) {
        LOG_ERR("accept");
        return;
    }
    if (_fd > FD_SETSIZE) {
        LOG_ERR("fd > FD_SETSIZE");
        return;
    }

    struct bufferevent *_bev = bufferevent_socket_new(_base, _fd, BEV_OPT_CLOSE_ON_FREE);
    bufferevent_setcb(_bev, read_cb, NULL, error_cb, arg);
    bufferevent_enable(_bev, EV_READ|EV_WRITE|EV_PERSIST);
}

int CEtNetBase::run() {
    int _ret = 0;
    evutil_socket_t _listener;
    _listener = socket(AF_INET, SOCK_STREAM, 0);
    assert(_listener > 0);
    evutil_make_listen_socket_reuseable(_listener);

    struct sockaddr_in _sin;
    _sin.sin_family = AF_INET;
    _sin.sin_addr.s_addr = 0;
    _sin.sin_port = htons(LISTEN_POINT);

    if (bind(_listener, (struct sockaddr *) &_sin, sizeof(_sin)) < 0) {
        LOG_ERR("bind");
        return 1;
    }

    if (listen(_listener, LISTEN_BACKLOG) < 0) {
        LOG_ERR("listen");
        return 1;
    }

    evutil_make_socket_nonblocking(_listener);

    struct event_base *_base = event_base_new();
    assert(_base != NULL);
    struct event *_listen_event;
    _listen_event = event_new(_base, _listener, EV_READ|EV_PERSIST, do_Accept, (void*)_base);
    event_add(_listen_event, NULL);
    event_base_dispatch(_base);

    LOG_CRIT("socket init");
    return 0;
}
