# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/02 20:54:00 by rubennijhui   #+#    #+#                  #
#    Updated: 2024/07/02 13:15:23 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#======= General =======#
CC			=	g++

SRC_DIR		=	src
OBJS_DIR	=	objs
BIN_DIR		=	bin
INCLUDE_DIR	=	include
EXEC_NAME	=	MargeSort
NAME		=	$(BIN_DIR)/$(EXEC_NAME)
OUTPUT		=	$(BIN_DIR)/$(EXEC_NAME)

#======== SRCS =========#

INC			=	-I $(INCLUDE_DIR) 

SRCS		=	main.cpp \
				PMergeMe.cpp

OBJS		=	$(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

#== Compilation stuff ==#

CFLAGS		=	-Wall -Wextra -Werror $(INC)

#======= Rules =========#

objs/%.o:src/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) -o $@ $^
	@echo "🔨 Compiling: $^"
	
all: $(NAME)

run: $(NAME)
	./$(OUTPUT) "8 7 6 5 4 3 1 100 -10 2 2 2 2"

$(NAME):$(OBJS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OBJS) -o $(OUTPUT)
	@echo "Finished creating: $@"

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: run all clean fclean re