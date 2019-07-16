#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "lib.h"

class Client
{
	Client() = delete;
public:
	Client(std::string host, int port);
	~Client();

private:
	boost::asio::io_service			_service;
	boost::asio::ip::tcp::endpoint  _ep;
	boost::asio::ip::tcp::socket    _sock;

	void			_startWork();

	void			_send_request(std::string request);
	std::string		_get_response();		
};

#endif