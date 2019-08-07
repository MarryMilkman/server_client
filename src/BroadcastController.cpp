#include "BroadcastController.hpp"

BroadcastController::BroadcastController() {

}

BroadcastController::~BroadcastController() {
    close(this->_sockfd);
}

BroadcastController &BroadcastController::getInstance() {
    static BroadcastController bc_controller;

    return bc_controller;
}

// MARK : send - send broadcast whith chuse message for router-client
void    BroadcastController::send(std::string message) {
    int num_b = 0;
    int i = -1;

    this->_dataInit_send();
    while(++i < 25)
    {
        num_b = sendto(this->_sockfd, message.c_str(), message.size(), 0, (struct sockaddr*)&this->_recvaddr, sizeof(this->_recvaddr));
        if (num_b == -1) {
            perror("Broadcast send (sendto):");
            throw std::exception();
        }
    }
    close(this->_sockfd);
}

    // init data for send broadcast
void    BroadcastController::_dataInit_send() {
    int answer_bind;

    this->_initGeneralData();
    //
    this->_recvaddr.sin_family = AF_INET;
    this->_recvaddr.sin_port = htons(BCC_PORT);
    this->_recvaddr.sin_addr.s_addr = inet_addr(BCC_ADDR);
    memset(this->_recvaddr.sin_zero, '\0', sizeof(this->_recvaddr.sin_zero));
    answer_bind = bind(this->_sockfd, (struct sockaddr*) &this->_sendaddr, sizeof(this->_sendaddr));
    if (answer_bind < 0) {
        perror("Broadcast bind send init:");
        throw std::exception();
    }
}



// MARK : receive - wait broadcast with message from router-server
void    BroadcastController::receive() {
    int     sendaddr_len;
    int     num_b;
    char    buff[64];

    this->_dataInit_recave();
    sendaddr_len = sizeof(this->_sendaddr);
    if ((num_b = recvfrom(this->_sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&this->_sendaddr, (socklen_t *)&sendaddr_len)) == -1)
    {
        perror("recvfrom");
        throw std::exception();
    }
    buff[num_b] = 0;
    this->_message = buff;
    close(this->_sockfd);
}
    // init data for receive broadcast
void    BroadcastController::_dataInit_recave() {
    int answer_bind;

    this->_initGeneralData();
    //
    this->_recvaddr.sin_family = AF_INET;
    this->_recvaddr.sin_port = htons(BCC_PORT);
    this->_recvaddr.sin_addr.s_addr = INADDR_ANY;
    memset(this->_recvaddr.sin_zero, '\0', sizeof(this->_recvaddr.sin_zero));
    answer_bind = bind(this->_sockfd, (struct sockaddr*) &this->_recvaddr, sizeof(this->_recvaddr));
    if (answer_bind < 0) {
        perror("Broadcast bind recave init:");
        throw std::exception();
    }
}



    //init general seting
void    BroadcastController::_initGeneralData() {
    int     answer;
    int     broadcast = 1;

    this->_sockfd = socket(PF_INET,SOCK_DGRAM,0);
    if (this->_sockfd == -1)
	{
		perror("sockfd");
		throw std::exception();
	}
    answer = setsockopt(this->_sockfd, SOL_SOCKET, SO_BROADCAST, &broadcast, sizeof(broadcast));
    if(answer == -1)
	{
		perror("setsockopt - SO_SOCKET ");
		throw std::exception();
	}
    this->_sendaddr.sin_family = AF_INET;
	this->_sendaddr.sin_port = htons(BCC_PORT);
	this->_sendaddr.sin_addr.s_addr = INADDR_ANY;
    memset(this->_sendaddr.sin_zero, '\0', sizeof(this->_sendaddr.sin_zero));
}



    //
std::string     BroadcastController::get_message() const {
    return this->_message;
}
