cmake_minimum_required(VERSION 3.6.2)

project(MyProject)

#set(BOOST_ROOT "/D:/all_with_prog/boost_1_72_0")
#set(Boost_LIBRARY_DIRS "/D:/all_with_prog/boost_1_72_0/lib")
#set(Boost_INCLUDE_DIRS "/D:/all_with_prog/boost_1_72_0")

#find_package(Boost 1.72 REQUIRED)

#link_directories( ${Boost_LIBRARY_DIRS})

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

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_executable(server_client ${SRC})
