#ifndef _ETCLIENTMAG_H_
#define _ETCLIENTMAG_H_

#include <memory>
#include <mutex>
#include <unordered_map>

class CEtClientBase;
class CEtClientMag {
public:
    static void addClient(int fd, std::shared_ptr<CEtClientBase> client);
    static void removeClient(int fd);
    static void decode(int fd, const char *data, int len);
    static void sendByFd(int fd, short cmd, const char *data, int len);
    static void sendByPid(int pid);
    static void heartbeat(int fd);
private:
    static std::unordered_map<int, std::shared_ptr<CEtClientBase>> m_clientMap;
    static std::mutex m_mutex;
};


#endif
