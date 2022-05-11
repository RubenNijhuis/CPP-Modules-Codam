# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rnijhuis <rnijhuis@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/25 13:07:38 by rnijhuis      #+#    #+#                  #
#    Updated: 2022/05/11 14:36:14 by rnijhuis      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME := bin/violence
BIN_DIR := bin
INCLUDE_DIR := include
OBJS_DIR := objs
SRC_DIR := src

#=====================================#
#=============== Input ===============#
#=====================================#

INC := -I $(INCLUDE_DIR)

SRCS :=		main.cpp \

OBJS := $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

#=====================================#
#========= Command arguments =========#
#=====================================#

CXX := clang++
CXXFLAGS := -Wall -Wextra -Werror -I -std=c++98 $(INC)

#=====================================#
#=============== Rules ===============#
#=====================================#

objs/%.o:src/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) -c $(CXXFLAGS) -o $@ $^
	@echo "🔨 Compiling: $^"

all: $(NAME)

$(NAME):$(OBJS)
	@$(CXX) $(OBJS) -o $(NAME)
	@echo "✅ Built $(NAME)"

run: $(NAME)
	@./$(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean:	clean
	@rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re