#include "Sender.hpp"
#include "ScriptExecutor.hpp"

Sender::Sender() {

}

Sender::~Sender() {

}

void    Sender::send_setting(std::vector<RouterData> list_routers) {
    for (RouterData r : list_routers)
        ScriptExecutor::sendSetting(r.pass, r.login, r.ip);
}

void    Sender::send_selfInfo(RouterData router) {
    ScriptExecutor::sendSelfInfo(router.serial_number, router.ip);
}

void    Sender::send_WAN_wasChanged() {

}
