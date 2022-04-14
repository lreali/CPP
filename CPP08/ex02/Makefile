# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ereali <ereali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 04:06:15 by ereali            #+#    #+#              #
#    Updated: 2022/04/14 12:03:16 by ereali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutan

INC_DIR = 	$(shell find includes -type d)

##List every folder where he will find source file
SRC_DIR = 	$(shell find srcs -type d)

##Folder where he will store the .o
OBJ_DIR	= obj

##Add to the vpath the folder find in SRC_DIR
vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

##Add to the vpath the folder find in SRC_DIR
vpath %.hpp $(foreach dir, $(INC_DIR), $(dir):)

##List every .c found inside SRC_DIR
SRC = main.cpp

##List every .h found inside INC_DIR
INC =

##Transform and place every .o from SRC
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

##Basics flags
CFLAGS =	-MMD -Wall -Wextra -Werror -std=c++98 #-g3 #-fsanitize=thread

##Create the flags to includes every .h needed by this program
IFLAGS =	$(foreach dir, $(INC_DIR), -I $(dir))

##Define the compiler to use
CC =	c++

all: $(NAME)

$(NAME): $(OBJ)
				@echo "Compiling $(NAME) ...\c"
				$(CC) $(OBJ) $(CFLAGS) $(IFLAGS) -o $(NAME)
				@echo " DONE"

$(OBJ_DIR)/%.o : %.cpp
				@mkdir -p $(OBJ_DIR)
				@echo "Compiling $< ...\c"
				@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
				@echo " DONE"

clean:
				@rm -rf $(OBJ_DIR)
				@echo "clean"

fclean:			clean
				@rm -f $(NAME)
				@echo "fclean"

re:				fclean all

.PHONY: all clean fclean re
