#include <memory>
#include <mutex>
#include <unordered_map>

class CEtClientBase;
class CEtClientMag {
public:
    static void addClient(int pid, std::shared_ptr<CEtClientBase> client);
    static void removeClient(int pid);
    static void decode(int pid, const char *data, int len);
    static void sendByPid(int pid, short cmd, const char *data, int len);
    static void sendByGid(int gid);
    static void heartbeat(int pid);
private:
    static std::unordered_map<int, std::shared_ptr<CEtClientBase>> m_clientMap;
    static std::mutex m_mutex;
};
