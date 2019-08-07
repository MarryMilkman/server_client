cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

include_directories (
	inc
	inc/client_tools
	inc/server_tools
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SRC
		src/server_tools/Server.cpp
		src/server_tools/Sender.cpp
		src/client_tools/Client.cpp

		src/BroadcastController.cpp
		src/TCP_IP_Worker.cpp

		src/main.cpp
		src/ScriptExecutor.cpp
		src/FlagsHendler.cpp
		src/CustomException.cpp
		src/StatusController.cpp

		src/RouterData.cpp
		src/RouterInfoController.cpp

	)


add_executable(server_client ${SRC})
