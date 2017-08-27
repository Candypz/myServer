#include "MessageTool.h"
#include "EtBuffer.h"

CMessageTool::CMessageTool(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
}

CMessageTool::~CMessageTool() {

}

const char *CMessageTool::createMessage(int cmd, const char *data, size_t *len) {
    std::shared_ptr<CEtBuffer> _etBuff(new CEtBuffer(m_serverId, m_serverType));
    _etBuff->create(cmd, data);
    *len = _etBuff->getSize();
    return _etBuff->getData();
}
