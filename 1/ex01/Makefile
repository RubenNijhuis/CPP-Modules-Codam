# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rnijhuis <rnijhuis@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/25 13:07:38 by rnijhuis      #+#    #+#                  #
#    Updated: 2022/05/02 18:11:55 by rnijhuis      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME := bin/Zombie
BIN_DIR := bin
INCLUDE_DIR := include
OBJS_DIR := objs
SRC_DIR := src

#=====================================#
#=============== Input ===============#
#=====================================#

INC := -I $(INCLUDE_DIR)

SRCS :=		main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			zombieHorde.cpp \

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
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(OBJS) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re