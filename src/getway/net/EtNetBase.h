#ifndef _ETNETBASE_H_
#define _ETNETBASE_H_

#include "EtClientBase.h"

class CEtNetBase {
public:
    CEtNetBase(int port);
    ~CEtNetBase();
    int run();
private:
    int m_port;
};

#endif
