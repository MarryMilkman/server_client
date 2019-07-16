#include "Server.hpp"

using namespace boost::asio;

Server::~Server() {}

Server::Server(std::string host, int port) :
	_acceptor(this->_service, ip::tcp::endpoint(ip::address::from_string(host.c_str()), port))
{
	this->_startWork();
}

void	Server::_startWork() {
	ip::tcp::socket				client_socket(this->_service);
	while (1)
	{
		int							bytes;
		char						request[500000];
		std::string					response;
		boost::system::error_code	err;

		this->_acceptor.accept(client_socket, err);
		if (err) {
			client_socket.close();
			continue;
		}
		bytes = boost::asio::read(client_socket, boost::asio::buffer(request), boost::asio::transfer_at_least(1), err);
		if (err) {
			client_socket.close();
			continue;
		}
		request[bytes] = 0;
		std::cerr << "Request:\n" << request << "\n";
		response = request;
		this->_encryption(response);
		std::cerr << "Response:\n" << response << "\n\n";
		client_socket.write_some(boost::asio::buffer(response));
	}
}

std::string	Server::_get_request() {
	return "";
}

void		_send_response(std::string response) {

}

void		Server::_encryption(std::string &str) {
	int		size = str.size();

	for (int i = 0; i < size; i++)
		str[i] += 7;
}