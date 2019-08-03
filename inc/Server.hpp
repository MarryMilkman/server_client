#ifndef SERVER_HPP
#define SERVER_HPP

#include "lib.h"

// class Server
// {
// 	Server() = delete;
// public:
// 	Server(std::string host, int port);
// 	~Server();
//
// private:
// 	boost::asio::io_service			_service;
// 	boost::asio::ip::tcp::acceptor	_acceptor;
//
// 	void		_startWork();
//
// 	std::string	_get_request();
// 	void		_send_response(std::string response);
//
// 	void		_encryption(std::string &str);
// };

class Server
{
	Server() = delete;
public:
	Server(std::string host, int port);
	~Server();

private:
	int 								_opt;
	int									_serv_sock_fd;
	struct sockaddr_in	_address;

	std::string _host;
	int					_port;

	int			_check_connection(std::string host, int port);
	void 		_init(std::string host, int port);
	void		_startWork();

	std::string	_read_from_sock(int sock, int &answer);
	void 				_send_response_to_sock(std::string resp, int sock, int answer);

	std::string	_get_request();
	void				_send_response(std::string response);

	void				_encryption(std::string &str);
};

#endif
