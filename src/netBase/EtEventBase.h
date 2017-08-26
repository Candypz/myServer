#ifndef _ETEVENTBASE_H_
#define _ETEVENTBASE_H_

class CEtEventBase {
public:
    static CEtEventBase &getInstance();
    static struct event_base* m_base;
    static struct evbuffer* m_buff;
    void init();
    bool run();
    virtual ~CEtEventBase();
private:
    CEtEventBase();
};

#endif
