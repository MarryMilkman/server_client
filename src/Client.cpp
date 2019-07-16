#include "Client.hpp"

Client::~Client(){}

Client::Client(std::string host, int port) :
	_ep(boost::asio::ip::address::from_string(host), port),
	_sock(this->_service)
{
	this->_startWork();
}

void			Client::_startWork() {
	std::string	line;

	while (1) {
		std::string		response;

		this->_sock.connect(this->_ep);
		while(!line.size()) {
			std::cout << "$>";
			getline(std::cin, line);
		}
		if (line == "-exit") {
			this->_sock.close();
			break ;
		}
		this->_send_request(line);
		response = this->_get_response();

		std::cout << "Response:\n" << response << "\n\n";
		line = "";
		this->_sock.close();
	}
	
}

void			Client::_send_request(std::string line) {
	this->_sock.write_some(boost::asio::buffer(line));
}

std::string		Client::_get_response() {
	char						buf[500000];
	int							byte;
	boost::system::error_code	err;

	byte = boost::asio::read(this->_sock, boost::asio::buffer(buf),
						boost::asio::transfer_at_least(1), err);
	buf[byte] = 0;
	return buf;
}