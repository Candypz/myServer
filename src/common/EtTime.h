#ifndef _ETTIME_H_
#define _ETTIME_H_

class CEtTime {
public:
    virtual ~CEtTime();
    static long now();
    static struct tm* time(const long &tm);
    static struct tm* time();
private:
    CEtTime();
};

#endif
