#include "Client.hpp"
#include "CastumException.hpp"


Client::~Client(){}

Client::Client(std::string host, int port)
{
	std::cerr << "Client:\n";
	this->_init_host_port(host, port);
	this->_startWork();
}

void Client::_init_host_port(std::string host, int port) {
	this->_host = host;
	this->_port = port;
}

void 			Client::_init_sock_addr() {
	if (!(this->_sock_fd = socket(AF_INET, SOCK_STREAM, 0)))
		throw CastumException(eType::e_createSock);
	this->_serv_addr.sin_family = AF_INET;
	this->_serv_addr.sin_port = htons(this->_port);
	if(inet_pton(AF_INET, this->_host.c_str(), &this->_serv_addr.sin_addr)<=0)
	{
		std::cerr << "Invalid address/ Address not supported \n";
		throw CastumException(eType::e_invalidAddr);
	}
}

void			Client::_startWork() {
	std::string	line;

	while (1) {
		std::string		response;

		this->_init_sock_addr();
		if (connect(this->_sock_fd, (struct sockaddr *)&this->_serv_addr, sizeof(this->_serv_addr)) < 0)
		{
			std::cerr << "connect failed\n";
			throw CastumException(eType::e_connect);
		}
		while(!line.size()) {
			std::cout << "$>";
			getline(std::cin, line);
			// line="";
		}
		if (line == "-exit") {
			break ;
		}
		this->_send_request(line);
		response = this->_get_response();

		std::cout << "Response:\n" << response << "\n\n";
		line = "";
		close(this->_sock_fd);
		exit(0);
	}
}

void			Client::_send_request(std::string line) {
	send(this->_sock_fd, line.c_str(), line.size(), 0);
	shutdown(this->_sock_fd, 1);
}

std::string		Client::_get_response() {
	char						buf[500000];
	int 						val = 0;
	int							bytes = 0;

	val = read(this->_sock_fd, buf, 1024);
	bytes += val;

	buf[bytes] = 0;
	return buf;
}
