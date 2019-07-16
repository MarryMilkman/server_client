cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

find_package(Boost 1.65 REQUIRED)

link_directories( ${Boost_LIBRARY_DIRS})

include_directories (
	inc
	${Boost_INCLUDE_DIRS}
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SRC
		src/main.cpp
		src/FlagsHendler.cpp
		src/Client.cpp
		src/Server.cpp
	)


add_executable(server_client ${SRC})