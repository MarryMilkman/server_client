#ifndef LIB_H
#define LIB_H


#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <memory.h>

#include <iostream>
#include <vector>

enum eType
{
  e_serverOnload = 0,
  e_bind,
  e_connect,
  e_invalidAddr,
  e_createSock
};

#endif
