#ifndef LIB_H
#define LIB_H

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <cstdarg>
#include <sys/select.h>

#define SETTING_FILE_PATH "../ssh_server_client.txt"

#include "RouterData.hpp"

enum eErrorType
{
    e_ok = 0,
    e_WAN_wasChange

};

enum eBroadcastType
{
    bct_notify_setting = 0,
    bct_WAN_wasChange
};


#endif
