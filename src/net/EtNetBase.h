#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>
#include <functional>

#include <event2/event.h>
#include <event2/bufferevent.h>

class CEtNetBase {
public:
    CEtNetBase();
    ~CEtNetBase();
    int run();
};
