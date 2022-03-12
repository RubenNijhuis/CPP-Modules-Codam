# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/02 20:54:00 by rubennijhui   #+#    #+#                  #
#    Updated: 2022/03/12 21:31:25 by rubennijhui   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook.out

INCLUDES := -I Contact/ \
			-I PhoneBook \

SRC 	= PhoneBook/PhoneBook.cpp \
		  Contact/Contact.cpp \
		  main.cpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(SRC)
	g++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

run: $(NAME)
	./$(NAME)

re: fclean all

clean:

fclean:
	@rm -rf $(NAME)

.PHONY: run all clean fclean re libft