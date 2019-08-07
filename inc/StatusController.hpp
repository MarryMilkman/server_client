#ifndef STATUS_CONTROLLER
# define STATUS_CONTROLLER

#include "lib.h"

enum eWorkMod
{
    wm_unknown = 0,
    wm_server,
    wm_client
};

class StatusController
{
    StatusController();
public:
    StatusController(StatusController const &ref) = delete;
    StatusController    &operator=(StatusController const &ref) = delete;

    ~StatusController();

    static StatusController &getInstance();
    static bool             isWAN();

    void                    choiceModWork(std::string host, int port);
private:
    eWorkMod        _mod;

    void            _scan();
    void            _startServer(std::string host, int port);
    void            _startClient(std::string host, int port);
    void            _fresh();
};

#endif
