# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Public/new_serv_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Public/new_serv_client/build

# Include any dependencies generated for this target.
include CMakeFiles/server_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server_client.dir/flags.make

CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o: ../src/server_tools/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o -c /home/user/Public/new_serv_client/src/server_tools/Server.cpp

CMakeFiles/server_client.dir/src/server_tools/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/server_tools/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/server_tools/Server.cpp > CMakeFiles/server_client.dir/src/server_tools/Server.cpp.i

CMakeFiles/server_client.dir/src/server_tools/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/server_tools/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/server_tools/Server.cpp -o CMakeFiles/server_client.dir/src/server_tools/Server.cpp.s

CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o: ../src/server_tools/Sender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o -c /home/user/Public/new_serv_client/src/server_tools/Sender.cpp

CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/server_tools/Sender.cpp > CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.i

CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/server_tools/Sender.cpp -o CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.s

CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o: ../src/client_tools/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o -c /home/user/Public/new_serv_client/src/client_tools/Client.cpp

CMakeFiles/server_client.dir/src/client_tools/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/client_tools/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/client_tools/Client.cpp > CMakeFiles/server_client.dir/src/client_tools/Client.cpp.i

CMakeFiles/server_client.dir/src/client_tools/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/client_tools/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/client_tools/Client.cpp -o CMakeFiles/server_client.dir/src/client_tools/Client.cpp.s

CMakeFiles/server_client.dir/src/BroadcastController.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/BroadcastController.cpp.o: ../src/BroadcastController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/server_client.dir/src/BroadcastController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/BroadcastController.cpp.o -c /home/user/Public/new_serv_client/src/BroadcastController.cpp

CMakeFiles/server_client.dir/src/BroadcastController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/BroadcastController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/BroadcastController.cpp > CMakeFiles/server_client.dir/src/BroadcastController.cpp.i

CMakeFiles/server_client.dir/src/BroadcastController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/BroadcastController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/BroadcastController.cpp -o CMakeFiles/server_client.dir/src/BroadcastController.cpp.s

CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o: ../src/TCP_IP_Worker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o -c /home/user/Public/new_serv_client/src/TCP_IP_Worker.cpp

CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/TCP_IP_Worker.cpp > CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.i

CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/TCP_IP_Worker.cpp -o CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.s

CMakeFiles/server_client.dir/src/main.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/server_client.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/main.cpp.o -c /home/user/Public/new_serv_client/src/main.cpp

CMakeFiles/server_client.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/main.cpp > CMakeFiles/server_client.dir/src/main.cpp.i

CMakeFiles/server_client.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/main.cpp -o CMakeFiles/server_client.dir/src/main.cpp.s

CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o: ../src/ScriptExecutor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o -c /home/user/Public/new_serv_client/src/ScriptExecutor.cpp

CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/ScriptExecutor.cpp > CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.i

CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/ScriptExecutor.cpp -o CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.s

CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o: ../src/FlagsHendler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o -c /home/user/Public/new_serv_client/src/FlagsHendler.cpp

CMakeFiles/server_client.dir/src/FlagsHendler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/FlagsHendler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/FlagsHendler.cpp > CMakeFiles/server_client.dir/src/FlagsHendler.cpp.i

CMakeFiles/server_client.dir/src/FlagsHendler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/FlagsHendler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/FlagsHendler.cpp -o CMakeFiles/server_client.dir/src/FlagsHendler.cpp.s

CMakeFiles/server_client.dir/src/CustomException.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/CustomException.cpp.o: ../src/CustomException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/server_client.dir/src/CustomException.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/CustomException.cpp.o -c /home/user/Public/new_serv_client/src/CustomException.cpp

CMakeFiles/server_client.dir/src/CustomException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/CustomException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/CustomException.cpp > CMakeFiles/server_client.dir/src/CustomException.cpp.i

CMakeFiles/server_client.dir/src/CustomException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/CustomException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/CustomException.cpp -o CMakeFiles/server_client.dir/src/CustomException.cpp.s

CMakeFiles/server_client.dir/src/StatusController.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/StatusController.cpp.o: ../src/StatusController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/server_client.dir/src/StatusController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/StatusController.cpp.o -c /home/user/Public/new_serv_client/src/StatusController.cpp

CMakeFiles/server_client.dir/src/StatusController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/StatusController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/StatusController.cpp > CMakeFiles/server_client.dir/src/StatusController.cpp.i

CMakeFiles/server_client.dir/src/StatusController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/StatusController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/StatusController.cpp -o CMakeFiles/server_client.dir/src/StatusController.cpp.s

CMakeFiles/server_client.dir/src/RouterData.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/RouterData.cpp.o: ../src/RouterData.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/server_client.dir/src/RouterData.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/RouterData.cpp.o -c /home/user/Public/new_serv_client/src/RouterData.cpp

CMakeFiles/server_client.dir/src/RouterData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/RouterData.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/RouterData.cpp > CMakeFiles/server_client.dir/src/RouterData.cpp.i

CMakeFiles/server_client.dir/src/RouterData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/RouterData.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/RouterData.cpp -o CMakeFiles/server_client.dir/src/RouterData.cpp.s

CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o: ../src/RouterInfoController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o -c /home/user/Public/new_serv_client/src/RouterInfoController.cpp

CMakeFiles/server_client.dir/src/RouterInfoController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/RouterInfoController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Public/new_serv_client/src/RouterInfoController.cpp > CMakeFiles/server_client.dir/src/RouterInfoController.cpp.i

CMakeFiles/server_client.dir/src/RouterInfoController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/RouterInfoController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Public/new_serv_client/src/RouterInfoController.cpp -o CMakeFiles/server_client.dir/src/RouterInfoController.cpp.s

# Object files for target server_client
server_client_OBJECTS = \
"CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o" \
"CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o" \
"CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o" \
"CMakeFiles/server_client.dir/src/BroadcastController.cpp.o" \
"CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o" \
"CMakeFiles/server_client.dir/src/main.cpp.o" \
"CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o" \
"CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o" \
"CMakeFiles/server_client.dir/src/CustomException.cpp.o" \
"CMakeFiles/server_client.dir/src/StatusController.cpp.o" \
"CMakeFiles/server_client.dir/src/RouterData.cpp.o" \
"CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o"

# External object files for target server_client
server_client_EXTERNAL_OBJECTS =

server_client: CMakeFiles/server_client.dir/src/server_tools/Server.cpp.o
server_client: CMakeFiles/server_client.dir/src/server_tools/Sender.cpp.o
server_client: CMakeFiles/server_client.dir/src/client_tools/Client.cpp.o
server_client: CMakeFiles/server_client.dir/src/BroadcastController.cpp.o
server_client: CMakeFiles/server_client.dir/src/TCP_IP_Worker.cpp.o
server_client: CMakeFiles/server_client.dir/src/main.cpp.o
server_client: CMakeFiles/server_client.dir/src/ScriptExecutor.cpp.o
server_client: CMakeFiles/server_client.dir/src/FlagsHendler.cpp.o
server_client: CMakeFiles/server_client.dir/src/CustomException.cpp.o
server_client: CMakeFiles/server_client.dir/src/StatusController.cpp.o
server_client: CMakeFiles/server_client.dir/src/RouterData.cpp.o
server_client: CMakeFiles/server_client.dir/src/RouterInfoController.cpp.o
server_client: CMakeFiles/server_client.dir/build.make
server_client: CMakeFiles/server_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Public/new_serv_client/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable server_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server_client.dir/build: server_client

.PHONY : CMakeFiles/server_client.dir/build

CMakeFiles/server_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server_client.dir/clean

CMakeFiles/server_client.dir/depend:
	cd /home/user/Public/new_serv_client/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Public/new_serv_client /home/user/Public/new_serv_client /home/user/Public/new_serv_client/build /home/user/Public/new_serv_client/build /home/user/Public/new_serv_client/build/CMakeFiles/server_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server_client.dir/depend
