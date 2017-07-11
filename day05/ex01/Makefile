# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 21:12:58 by lwang             #+#    #+#              #
#    Updated: 2017/07/10 21:13:00 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRC = main.cpp Bureaucrat.cpp Form.cpp 

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	g++ $(CFLAGS) -o $(NAME) $(OBJ) -IBureaucrat.hpp -IForm.hpp

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)

