#include "EtClientMag.h"
#include "EtClientBase.h"

std::unordered_map<int, std::shared_ptr<CEtClientBase>> CEtClientMag::m_clientMap;
std::mutex CEtClientMag::m_mutex;

void CEtClientMag::addClient(int pid, std::shared_ptr<CEtClientBase> client) {
    std::lock_guard<std::mutex> lock(m_mutex);
    m_clientMap[pid] = client;
}

void CEtClientMag::removeClient(int pid) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[pid]) {
        m_clientMap.erase(pid);
    }
}

void CEtClientMag::sendByPid(int pid, short cmd, const char *data) {
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_clientMap[pid]) {
        m_clientMap[pid]->send(cmd, data);
    }
}

void CEtClientMag::sendByGid(int gid) {
    std::lock_guard<std::mutex> lock(m_mutex);
}
