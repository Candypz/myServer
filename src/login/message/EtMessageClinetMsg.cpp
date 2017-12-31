#include "EtMessageClinetMsg.h"
#include "EtClientMessage.h"
#include <memory>

CEtMessageClinetMsg::CEtMessageClinetMsg() {

}

CEtMessageClinetMsg::~CEtMessageClinetMsg() {

}

CEtMessageClinetMsg &CEtMessageClinetMsg::getInstance() {
    static CEtMessageClinetMsg _instance;
    return _instance;
}

void CEtMessageClinetMsg::pickupMessage(evutil_socket_t fd, const char *data, size_t len) {
    auto _message = std::shared_ptr<CEtClientMessage>(new CEtClientMessage(fd, data, len));
    _message->work();
}
