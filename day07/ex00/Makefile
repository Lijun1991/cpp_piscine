# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 09:09:34 by lwang             #+#    #+#              #
#    Updated: 2017/07/13 09:09:36 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRC = whatever.cpp

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	g++ $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)
