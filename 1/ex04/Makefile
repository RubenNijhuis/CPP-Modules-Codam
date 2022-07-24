# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/02 20:54:00 by rubennijhui   #+#    #+#                  #
#    Updated: 2022/07/24 22:41:22 by rubennijhui   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#======= General =======#

CC			=	g++

ASSETS_DIR	=	assets
SRC_DIR		=	src
OBJS_DIR	=	objs
BIN_DIR		=	bin
INCLUDE_DIR	=	include
EXEC_NAME	=	sed
NAME		=	$(BIN_DIR)/$(EXEC_NAME)
OUTPUT		=	$(BIN_DIR)/$(EXEC_NAME)

#======== SRCS =========#

INPUT_WORD	=	""
REPl_WORD	=	""

INPUT_FILE	=	$(ASSETS_DIR)/www.txt $(INPUT_WORD) $(REPl_WORD)

INC			=	-I $(INCLUDE_DIR)

SRCS		=	main.cpp \
				Sed.cpp

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
	./$(OUTPUT) $(INPUT_FILE) 

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