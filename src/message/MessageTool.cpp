#include "MessageTool.h"
#include "EtBuffer.h"

CMessageTool::CMessageTool(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
}

CMessageTool::~CMessageTool() {

}

std::string CMessageTool::createMessage(int cmd, const char *data, int len) {
    std::shared_ptr<CEtBuffer> _etBuff(new CEtBuffer(m_serverId, m_serverType));
    int _len = 1;
    auto _str = _etBuff->create(cmd, data, &_len);
    return std::string(_str, _len);
}
