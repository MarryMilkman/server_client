#include "Client.hpp"
#include "CustomException.hpp"
#include "BroadcastController.hpp"
#include "TCP_IP_Worker.hpp"

#include "RouterInfoController.hpp"


Client::~Client(){}

Client::Client(std::string host, int port)
{
	std::cerr << "Client:\n";
	RouterInfoController::getInstance();
	this->_startWork();
}



void 	Client::_startWork() {
	BroadcastController		&bc_controller = BroadcastController::getInstance();
	std::string				mess;

	while (1) {
		bc_controller.receive();

		mess = bc_controller.get_message();
		std::cerr << "Message geting: *" << mess << "*\n";
		if (mess == "Setting changed")
			this->_sendAnswer("Setting: delivered");
		if (mess == "Apply setting") {
			if (this->_applySetting())
				this->_sendAnswer("Setting: not apply");
			else
				this->_sendAnswer("Setting: apply");
		}
		std::cerr << "-----------\n";
	}
}

// try send message (1.5 sec)
void 			Client::_sendAnswer(std::string message) {
	TCP_IP_Worker 			tcp_ip;
	RouterInfoController	&info_controller = RouterInfoController::getInstance();
	RouterData 				server = info_controller.get_server_info();
	int 					i = 0;

	while (i < 500) {
		if(tcp_ip.tcp_connect(server.ip, server.port) == 0)
			break;
		sleep(0.5);
		i++;
	}
	if (i >= 500)
		std::cerr << "ANSWER NOT SENDED: " << message << "\n";
	else {
		std::cerr << i << " try, " << "success connect\n";
		tcp_ip.tcp_send(message);
	}
	tcp_ip.tcp_disconnect();
}

int 			Client::_applySetting() {
	return 0;
}
