#ifndef _ETNETBASE_H_
#define _ETNETBASE_H_

class CEtNetBase {
public:
    CEtNetBase();
    ~CEtNetBase();
    bool init();
    int run();
private:
    int m_port;
    int m_serverId;
    int m_serverType;
    std::string m_addr;
    std::string m_serverName;
};

#endif
