#ifndef _MESSAGECMD_H
#define _MESSAGECMD_H

namespace Msg {


struct PackageHead {
    short size;
    short serverPid;
};

#define MSG_MAX_LINE 1024
#define MSG_SERVER_PID 2819

#define S_Registration_Req      1000
#define S_Registration_Res      1001

}


#endif
