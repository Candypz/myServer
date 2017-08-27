#ifndef _ETEVENTBASE_H_
#define _ETEVENTBASE_H_

class CEtEventBase {
public:
    static CEtEventBase &getInstance();
    static struct event_base* m_base;
    void init();
    bool run();
    struct evbuffer* getEvBuffer();
    virtual ~CEtEventBase();
private:
    CEtEventBase();
    struct evbuffer* m_buff;
};

#endif
