#include "EtClientMag.h"
#include "EtClientBase.h"

std::unordered_map<int, std::shared_ptr<CEtClientBase>> CEtClientMag::m_clientMap;
std::mutex CEtClientMag::m_mutex;

void CEtClientMag::addClient(int fd, std::shared_ptr<CEtClientBase> client) {
    std::lock_guard<std::mutex> lock(m_mutex);
    m_clientMap[fd] = client;
}

void CEtClientMag::removeClient(int fd) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[fd]) {
        m_clientMap.erase(fd);
    }
}

void CEtClientMag::sendByFd(int fd, short cmd, const char *data, int len) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[fd]) {
        m_clientMap[fd]->send(cmd, data, len);
    }
}

void CEtClientMag::sendByPid(int pid) {
    std::lock_guard<std::mutex> lock(m_mutex);
}

void CEtClientMag::decode(int fd, const char *data, int len) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[fd]) {
        m_clientMap[fd]->decode(data, len);
    }
}

void CEtClientMag::heartbeat(int fd) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[fd]) {
        m_clientMap[fd]->heartbeatCb();
    }
}
