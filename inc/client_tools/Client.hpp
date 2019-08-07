#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "lib.h"

#include "RouterData.hpp"

class Client
{
	Client() = delete;
public:
	Client(std::string host, int port);
	~Client();

private:
	int 				_server_port;
	std::string			_server_ip;

	void			_startWork();

	void 			_sendAnswer(std::string message);
	int 			_applySetting();
};

#endif
