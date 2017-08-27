#include "MessageTool.h"
#include "EtWriteBuffer.h"

CMessageTool::CMessageTool(int serverId, int serverType) {
    m_serverId = serverId;
    m_serverType = serverType;
}

CMessageTool::~CMessageTool() {

}

const char *CMessageTool::createMessage(int cmd, const char *data, size_t *len) {
    std::shared_ptr<CEtWriteBuffer> _etBuff(new CEtWriteBuffer(m_serverId, m_serverType));
    _etBuff->create(cmd, data);
    *len = _etBuff->getSize();
    return _etBuff->getData();
}
