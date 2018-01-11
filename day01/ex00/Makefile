# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 18:47:55 by lwang             #+#    #+#              #
#    Updated: 2017/07/03 18:47:57 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Pony

SRC = main.cpp Pony.cpp

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ) -IPony.hpp

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)

