#ifndef SERVER_HPP
#define SERVER_HPP

#include "lib.h"

class Server
{
	Server() = delete;
public:
	Server(std::string host, int port);
	~Server();

private:
	boost::asio::io_service			_service;
	boost::asio::ip::tcp::acceptor	_acceptor;

	void		_startWork();

	std::string	_get_request();
	void		_send_response(std::string response);

	void		_encryption(std::string &str);
};

#endif