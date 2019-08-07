#include "StatusController.hpp"
#include "ScriptExecutor.hpp"

#include "Server.hpp"
#include "Client.hpp"

StatusController::StatusController() {
    this->_fresh();
}

StatusController::~StatusController() {

}

StatusController    &StatusController::getInstance() {
    static StatusController controller;

    return controller;
}

// MARK : choiceModWork
//check router: if master ? server : client
void        StatusController::choiceModWork(std::string host, int port) {
    this->_scan();
    if (this->_mod == eWorkMod::wm_server)
        this->_startServer(host, port);
    else if (this->_mod == eWorkMod::wm_client) {
        this->_startClient(host, port);
        // sleep(1000);
    }
    this->_fresh();
}

void        StatusController::_scan() {
    if (StatusController::isWAN())
        this->_mod = eWorkMod::wm_server;
    else
        this->_mod = eWorkMod::wm_client;
}

// MARK : check is device master (have WAN)
bool        StatusController::isWAN() {
    std::string     line;

    line = ScriptExecutor::getOutput::checkWAN();
    std::cerr << "isWAN: *" << line << "*\n";
    if (line == "TEST MOD\n")
        return true;
    return false;
}


void        StatusController::_startServer(std::string host, int port) {
    try {
        Server(host, port);
    } catch (std::exception &e) {
        std::cerr << e.what() << "\n";
    }
}

void        StatusController::_startClient(std::string host, int port) {
    try {
        Client(host, port);
    } catch (std::exception &e) {
        std::cerr << e.what() << "\n";
    }
}

void        StatusController::_fresh() {
    this->_mod = eWorkMod::wm_unknown;
}
