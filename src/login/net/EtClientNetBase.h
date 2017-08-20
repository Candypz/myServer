#ifndef _CETCLIENTNETBASE_H_
#define _CETCLIENTNETBASE_H_

class CEtClientNetBase {
public:
    CEtClientNetBase();
    ~CEtClientNetBase();
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
