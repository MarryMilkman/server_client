#ifndef SENDER
#define SENDER

#include "lib.h"

class Sender {

public:
    Sender();
    ~Sender();

    // std::vector<RouterData> list_routers;

    static void    send_setting(std::vector<RouterData> list_routers);
    static void    send_selfInfo(RouterData router);
    static void    send_WAN_wasChanged();
    // void    send_errorList();
};

#endif
