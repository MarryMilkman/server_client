#include "RouterInfoController.hpp"
#include "ScriptExecutor.hpp"

RouterInfoController::RouterInfoController() {
    // need write scripts for take info from system about routers (DHCP)
    RouterData router_kube("192.168.1.1", "root", "11111111", 54216, "KUBE");
    RouterData router_ubuntu("192.168.1.134", "root", "11111111", 54216, "ubuntu");

    std::string line = ScriptExecutor::getOutput::execute(1, "some.sh");

    if (line == "ubuntu\n") {
        this->_self_info = router_ubuntu;
    }
    else
        this->_self_info = router_kube;

    #define SERVER_UBUNTU 1

    #if SERVER_UBUNTU
        this->_server_info = router_ubuntu;
        this->_list_routers.push_back(router_kube);
    #else
        this->_server_info = router_kube;
        this->_list_routers.push_back(router_ubuntu);
    #endif
    // this->_list_routers.push_back(router_ubuntu);
}

RouterInfoController::~RouterInfoController() {}

RouterInfoController &RouterInfoController::getInstance() {
    static RouterInfoController info_controller;

    return info_controller;
}

std::vector<RouterData>     RouterInfoController::get_routers_info(){
    return this->_list_routers;
}

RouterData                  RouterInfoController::get_self_info(){
    return this->_self_info;
}

RouterData                  RouterInfoController::get_server_info(){
    return this->_server_info;
}


// std::vector<RouterData> 	Server::_getRoutersInfo() {
// 	std::vector<RouterData> list_routers;
// 	// test
// 	RouterData router;
//
// 	router.ip = "192.168.1.1";
// 	router.login = "root";
// 	router.pass = "11111111";
// 	router.port = 9897;
// 	router.serial_number = "1234567";
// 	//
// 	list_routers.push_back(router);
// 	return list_routers;
// }
