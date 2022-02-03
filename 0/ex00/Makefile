# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/02 20:54:00 by rubennijhui   #+#    #+#                  #
#    Updated: 2022/02/02 21:12:17 by rubennijhui   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	g++ $(FLAGS) $(SRC) -o $(NAME)

re: fclean all

clean:

fclean:
	@ rm -rf $(NAME)

.PHONY: run all clean fclean re libft