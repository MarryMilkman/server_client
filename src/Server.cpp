#include "Server.hpp"
#include "CastumException.hpp"

Server::~Server() {}

Server::Server(std::string host, int port)
{
	if (!this->_check_connection(host, port)) {
		throw std::exception();
	}
	std::cout << "Server:\n";
	this->_init(host, port);
	this->_startWork();
}

int	Server::_check_connection(std::string host, int port) {
	int 								check_sock = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in	addr;
	int 								answer;

	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = inet_addr(host.c_str());
	answer = connect(check_sock, (struct sockaddr *)&addr, sizeof(addr));
	close(check_sock);
	return answer;
}

void Server::_init(std::string host, int port) {
	int 	answer;

	this->_host = host;
	this->_port = port;
	this->_opt = 1;
	this->_serv_sock_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (!this->_serv_sock_fd) {
		std::cerr << "fail create sock\n";
		exit(0);
	}
	// answer = setsockopt(this->_serv_sock_fd, SOL_SOCKET,
	// 			SO_REUSEADDR | SO_REUSEPORT, &this->_opt, sizeof(this->_opt));
	//
	// if (answer) {
	// 	std::cerr << strerror(errno) << " | setsockopt error\n";
	// 	exit(0);
	// }
	this->_address.sin_family = AF_INET;
	this->_address.sin_port = htons(this->_port);
	this->_address.sin_addr.s_addr = inet_addr(this->_host.c_str());

	answer = bind(this->_serv_sock_fd, (struct sockaddr *)&this->_address,
	  		sizeof(this->_address));
	if (answer < 0) {
		std::cerr << "bind error\n";
		exit(0);
	}
}

void	Server::_startWork() {
	struct sockaddr_in	addr_client;
	int 								addr_client_len = sizeof(addr_client);
	int 								new_socket;

	while (1)
	{
		int					bytes;
		int 				val;
		std::string	request;
		std::string	response;

		if (listen(this->_serv_sock_fd, 5) < 0) {
			std::cerr << "listen fail\n";
			continue;
		}
		new_socket = accept(this->_serv_sock_fd, 0, 0);
		if (new_socket < 0) {
			std::cerr << "accept fail\n";
			continue;
    	}
		request = this->_read_from_sock(new_socket, val);
		if (val < 0) {
			std::cerr << "filed read client_sock\n";
			continue;
		}
		if (!request.size())
			continue;
		std::cerr << "Request:\n" << request << "\n";
		response = request;
		this->_encryption(response);
		std::cerr << "Response:\n" << response << "\n\n";
		this->_send_response_to_sock(response, new_socket, val);

		close(new_socket);
	}
}

std::string	Server::_read_from_sock(int sock, int &answer) {
	char	buffer[1025];

	int rc = recv(sock, buffer, 1024, 0);
	buffer[rc] = 0;
	// while (1) {
	// 	memset(buffer, 0, 1025);
	//
  //   if( rc < 0 )
  //   {
  //     if( errno == EINTR )
  //       continue;
  //     answer = errno;
  //     return "";
  //   }
	// 	count += rc;
  //   if( rc == 0 )
  //     break;
	// }
	return buffer;
}

void 				Server::_send_response_to_sock(std::string resp, int sock, int answer) {
	send(sock, resp.c_str(), resp.size(), 0);
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
