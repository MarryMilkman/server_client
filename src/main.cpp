#include "lib.h"

#include "FlagsHendler.hpp"
#include "Client.hpp"
#include "Server.hpp"


int main(int argc, char const *argv[])
{
	std::string		host;
	int				port;
	int				mod;

	FlagsHendler f = FlagsHendler(argc, argv, host, port, mod);
	try {
		if (mod == 0)
			Server(host, port);
		else if (mod == 1)
			Client(host, port);
		else {
			try {
				Server(host, port);
			}
			catch (std::exception &e) {
				Client(host, port);
			}
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << "\n";
		return (1);
	}
	return 0;
}