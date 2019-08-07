# Name of the program
NAME	:= server_client

# Directories
OBJ_DIR	:= ./obj/
SRC_DIR	:= ./src/
INC_DIR := ./inc/
INC_DIR_CLIENT := ./inc/client_tools/
INC_DIR_SERV := ./inc/server_tools/


# Source and object files
SRC		:= 				main.cpp \
			server_tools/Server.cpp \
			server_tools/Sender.cpp \
			client_tools/Client.cpp \
			TCP_IP_Worker.cpp \
			BroadcastController.cpp \
			ScriptExecutor.cpp \
			FlagsHendler.cpp \
			CustomException.cpp \
			StatusController.cpp \
			RouterInfoController.cpp \
			RouterData.cpp
OBJ		:= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

# Header files
INC	:= lib.h

# Compiler and flags
CC		:= mipsel-linux-gnu-g++-5
FLAGS	:= -std=c++11 -EL -march=24kc -static #-muclibc -mips32



# Compile and link the program
all: obj_dir $(NAME)

# Link object files into the executable
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) -I$(INC_DIR) -I $(INC_DIR_SERV) -I $(INC_DIR_CLIENT)

# Compile object files from source files
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -o $@ -c $<  -I $(INC_DIR) -I $(INC_DIR_SERV) -I $(INC_DIR_CLIENT)

# Create a directory for object files
obj_dir:
	@mkdir -p $(OBJ_DIR) $(OBJ_DIR)/server_tools $(OBJ_DIR)/client_tools

# Delete object files
clean:
	rm -rf $(OBJ_DIR)

# Delete all files created with the Makefile
fclean: clean
	rm -f $(NAME)

# Re-make all files
re: fclean all

# GNU will run even if files have names as instructions
.PHONY: all clean fclean re
