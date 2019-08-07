#include "Server.hpp"
#include "CustomException.hpp"

#include "RouterInfoController.hpp"

#include "BroadcastController.hpp"
#include "TCP_IP_Worker.hpp"

#include "Sender.hpp"

Server::~Server() {}

Server::Server(std::string host, int port)
{
	std::cout << "Server:\n";
	RouterInfoController::getInstance();
	this->_init(host, port);
	this->_startWork();
}

void Server::_init(std::string host, int port) {
	this->_host = host;
	this->_port = port;
	this->_applySetting();
}

void	Server::_startWork() {
	BroadcastController		&bc_controller = BroadcastController::getInstance();
	RouterInfoController 	&info_controller = RouterInfoController::getInstance();

	while (1) {
		if (this->_isFileChange()) {
			std::vector<RouterData> list_routers = info_controller.get_routers_info();
			this->_send_setting_to(list_routers);
			bc_controller.send("Apply setting");
			this->_applySetting();
			this->_listenAnswer(list_routers, "Setting: delivered", "Setting: not delivered");
			std::cerr << "setting apply\n";
		}
		if (this->_isTimeForSendSelfInfo());
			// Sender::send_selfInfo();bc_controllerbc_controller
		// if (StatusController::isWAN()) {
		// 	BroadcastController.getInstance().send("WAN changed");
		// 	return;
		// }
		// if (this->_error)
		// 	this->_sender.send_errorList();
	}
}

 // MARK : _send_setting_to - send setting to list_routers, listen answer
void 		Server::_send_setting_to(std::vector<RouterData> list_routers) {
	if (!list_routers.size())
		return;
	std::vector<RouterData> errors_list_routers;
	BroadcastController		&bc_controller = BroadcastController::getInstance();

	Sender::send_setting(list_routers);
	bc_controller.send("Setting changed");
	errors_list_routers = this->_listenAnswer(list_routers, "Setting: delivered", "Setting: not delivered");
	if (!errors_list_routers.size())
		return;
	if (errors_list_routers.size() != list_routers.size()) {
		std::cerr << "Failed to get setting in some routers. Try again\n";
		this->_send_setting_to(errors_list_routers);
	}
	else {
		std::cerr << "ERROR: some routers cant apply setting for some reason:\n";
		for (RouterData router : errors_list_routers)
			std::cerr << router.ip << " ip from error list\n";
	}
}






























std::vector<RouterData> Server::_listenAnswer(
						std::vector<RouterData> 	list_routers,
						std::string 				answer_success,
						std::string					answer_fail)
{
	if (!list_routers.size())
		return std::vector<RouterData>();
	RouterInfoController 	&info_controller = RouterInfoController::getInstance();
	RouterData 				self_info =	info_controller.get_self_info();
	TCP_IP_Worker 			tcp_ip_worker;
	std::string 			connected_ip;
	std::vector<RouterData>	errors_list_routers;

	int 					count = 0;
	int 					size = list_routers.size();

	std::cerr << "-------------\n";
	while (1) {
		std::cerr << "Count routers: " << size << "\n";
		std::cerr << "Count success routers: " << count << "\n";
		if (count >= size)
			break;
		if (tcp_ip_worker.acceptMessage("0.0.0.0", self_info.port))
			break ;
		connected_ip = tcp_ip_worker.get_connected_ip();
		std::cerr << connected_ip << " connect ip\n";
		for (RouterData router : list_routers) {
			if (router.ip == connected_ip) {
				std::string mess = tcp_ip_worker.get_message();
				count++;

				std::cerr << "Answer: " << mess << "\n";

				if (mess == answer_success) {
					router.is_ok = true;
					router.messageError = "";
				}
				else if (mess == answer_fail){
					router.is_ok = false;
					router.messageError = answer_fail;
					errors_list_routers.push_back(router);
				}
				else {
					router.is_ok = false;
					router.messageError = mess;
					errors_list_routers.push_back(router);
				}
				break;
			}
		}
		// tcp_ip_worker.tcp_disconnect();
	}
	std::cerr << "-------------\n";
	tcp_ip_worker.tcp_disconnect();
	return errors_list_routers;
}


void  	Server::_applySetting() {
	// std::string	applyAnswer;
	std::string file_path = SETTING_FILE_PATH;
	struct stat buff;

	stat(file_path.c_str(), &buff);
	this->_check_setting_time = buff.st_mtime;
	// applyAnswer = ScriptExecutor::getOutput::applySetting();
}

bool 	Server::_isFileChange() {
	std::string file_path = SETTING_FILE_PATH;
	struct stat buff;

	stat(file_path.c_str(), &buff);
	if (this->_check_setting_time != buff.st_mtime)
		return true;
	return false;
}

bool 	Server::_isTimeForSendSelfInfo() {
	return false;
}
