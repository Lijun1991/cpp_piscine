# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 18:28:27 by lwang             #+#    #+#              #
#    Updated: 2017/07/14 18:28:28 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC = main.cpp span.cpp

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror 
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	g++ $(CFLAGS) -o $(NAME) $(OBJ) -Ispan.hpp

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)

