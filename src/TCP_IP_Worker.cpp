#include "TCP_IP_Worker.hpp"

TCP_IP_Worker::TCP_IP_Worker() {
    std::cerr << "Hello,im TCP/TP\n";
    this->_sockfd = 0;
}

TCP_IP_Worker::~TCP_IP_Worker() {
    close(this->_sockfd);
    close(this->_accepted_sockfd);
    std::cerr << "X_X: TCP/TP\n";
}

// MARK : servers metods
int         TCP_IP_Worker::acceptMessage(std::string ip, int port) {
    socklen_t       acc_add_len = sizeof(this->_accepted_addres);
    fd_set          readfds;
    fd_set          writesfds;
    struct timeval  timeout;


    timeout.tv_sec = 2;
    timeout.tv_usec = 5000;
    memset(this->_accepted_addres.sin_zero, 0, sizeof(this->_accepted_addres.sin_zero));
    if (!this->_sockfd)
        this->_init_for_accept(port);
    if (listen(this->_sockfd, 5) < 0) {
        std::cerr << "listen fail\n";
        this->_init_for_accept(port);
        return -1;
    }
    FD_ZERO(&readfds);
    FD_SET(this->_sockfd , &readfds);
    int activity = select(this->_sockfd + 1, &readfds, 0, 0, &timeout);
    std::cerr << activity << " - connected sockets\n";
    if (activity > 0)
        this->_accepted_sockfd = accept(this->_sockfd, (struct sockaddr *)&this->_accepted_addres, &acc_add_len);
    else
        return -1;
    if (this->_accepted_sockfd <= 0) {
        std::cerr << "accept fail\n";
        return -1;
    }
    this->_message = this->_read_from_sock(this->_accepted_sockfd);
    return 0;
}

int         TCP_IP_Worker::tcp_disconnect() {
    return close(this->_sockfd);
    this->_sockfd = 0;
}

std::string TCP_IP_Worker::get_connected_ip() const {
    return inet_ntoa(this->_accepted_addres.sin_addr);
}


// MARK : client metods
int         TCP_IP_Worker::tcp_connect(std::string ip, int port) {
    this->_init_for_connect(ip, port);

    if (connect(this->_sockfd, (struct sockaddr *)&this->_addr_for_connect, sizeof(this->_addr_for_connect)) < 0)
    {
        // std::cerr << "connect failed\n";
        return -1;
    }
    return 0;
}

int         TCP_IP_Worker::tcp_send(std::string message) {
    if (send(this->_sockfd, message.c_str(), message.size(), 0) < 0) {
        std::cerr << "send fail\n";
        return -1;
    }
    shutdown(this->_sockfd, 1);
    return 0;
}


// MARK : general metods
std::string TCP_IP_Worker::get_message() const {
    return this->_message;
}



// MARK : init

    // accept
int         TCP_IP_Worker::_init_for_accept(int port) {
    int     opt;
    int     setting = SO_REUSEADDR & SO_REUSEPORT;

    if (!(this->_sockfd = socket(AF_INET, SOCK_STREAM, 0)))
        return -1;
    this->_addres.sin_family = AF_INET;
    this->_addres.sin_port = htons(port);
    this->_addres.sin_addr.s_addr = INADDR_ANY;
    memset(this->_addres.sin_zero, '\0', sizeof(this->_addres.sin_zero));
    setsockopt(this->_sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
    setsockopt(this->_sockfd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
    int answer = bind(this->_sockfd, (struct sockaddr *)&this->_addres, sizeof(this->_addres));
	if (answer < 0) {
		perror("bind error");
		return -1;
	}
    return 0;
}

    // connect
int         TCP_IP_Worker::_init_for_connect(std::string ip, int port) {
    int     opt;
    int     setting = SO_REUSEADDR & SO_REUSEPORT;

    if (!(this->_sockfd = socket(AF_INET, SOCK_STREAM, 0)))
		return -1;
	this->_addr_for_connect.sin_family = AF_INET;
	this->_addr_for_connect.sin_port = htons(port);
    this->_addr_for_connect.sin_addr.s_addr = inet_addr(ip.c_str());
    memset(this->_addr_for_connect.sin_zero, '\0', sizeof(this->_addr_for_connect.sin_zero));
    setsockopt(this->_sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
    setsockopt(this->_sockfd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
    return 0;
}


std::string	TCP_IP_Worker::_read_from_sock(int sock) {
	char	buffer[64];

	int rc = recv(sock, buffer, sizeof(buffer), 0);
    shutdown(sock, 0);
	buffer[rc] = 0;
	return buffer;
}
