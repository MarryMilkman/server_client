#ifndef SERVER_HPP
#define SERVER_HPP


#include "lib.h"


class Server
{
	Server() = delete;
public:
	Server(std::string host, int port);
	~Server();

private:
	eErrorType 			_error;
	std::string			_host;
	int 				_port;
	time_t 				_check_setting_time;
	// ControllerTCP_IP	_tcp_ip;

	void		_startWork();

	void 						_init(std::string host, int port);
	void 						_applySetting();
	std::vector<RouterData>		_getRoutersInfo();

	bool 						_isFileChange();
	bool 						_isTimeForSendSelfInfo();


	std::vector<RouterData> 			_listenAnswer(
				std::vector<RouterData> list_routers,
				std::string 			answer_success,
				std::string				answer_fail);

	void 								_send_setting_to(
				std::vector<RouterData> list_routers);


};

#endif
