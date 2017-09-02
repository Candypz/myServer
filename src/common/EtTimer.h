#ifndef _ETTIMER_H_
#define _ETTIMER_H_

class CEtTimer {
public:
    static void delayTime(int seconds, void (*fun)(int fd, short event, void *arg));
    static void loopAtonce(int seconds, void (*fun)(int fd, short event, void *arg));
};

#endif
