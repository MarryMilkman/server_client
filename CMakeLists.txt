<<<<<<< HEAD
cmake_minimum_required(VERSION 3.6.2)

project(MyProject)

#set(BOOST_ROOT "/D:/all_with_prog/boost_1_72_0")
#set(Boost_LIBRARY_DIRS "/D:/all_with_prog/boost_1_72_0/lib")
#set(Boost_INCLUDE_DIRS "/D:/all_with_prog/boost_1_72_0")

#find_package(Boost 1.72 REQUIRED)

#link_directories( ${Boost_LIBRARY_DIRS})
=======
cmake_minimum_required(VERSION 3.10.2)

project(MyProject)

find_package(Boost 1.65 REQUIRED)

link_directories( ${Boost_LIBRARY_DIRS})
>>>>>>> 87c88ab1847e3f9f81749409afe86d1fb03c7c02

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

<<<<<<< HEAD
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_executable(server_client ${SRC})
=======

add_executable(server_client ${SRC})
>>>>>>> 87c88ab1847e3f9f81749409afe86d1fb03c7c02
