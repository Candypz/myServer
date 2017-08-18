#include "EtClientMag.h"
#include "EtClientBase.h"

std::unordered_map<int, std::shared_ptr<CEtClientBase>> CEtClientMag::m_clientMap;

void CEtClientMag::addClient(int fd, std::shared_ptr<CEtClientBase> client) {
    m_clientMap[fd] = client;
}

void CEtClientMag::removeClient(int fd) {
    if (m_clientMap[fd]) {
        m_clientMap.erase(fd);
    }
}

void CEtClientMag::sendByFd(int fd, short cmd, const char *data, int len) {
    if (m_clientMap[fd]) {
        m_clientMap[fd]->send(cmd, data, len);
    }
}

void CEtClientMag::sendByPid(int pid) {

}

void CEtClientMag::decode(int fd, const char *data, int len) {
    if (m_clientMap[fd]) {
        m_clientMap[fd]->decode(data, len);
    }
}

void CEtClientMag::heartbeat(int fd) {
    if (m_clientMap[fd]) {
        m_clientMap[fd]->heartbeatCb();
    }
}
