cmake_minimum_required(VERSION 3.5.1)

project(MyProject)

include_directories (
	inc
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SRC
		src/main.cpp
		src/FlagsHendler.cpp
		src/Client.cpp
		src/Server.cpp
		src/CastumException.cpp
	)


add_executable(server_client ${SRC})
