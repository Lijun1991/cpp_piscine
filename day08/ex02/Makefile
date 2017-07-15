# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 20:11:54 by lwang             #+#    #+#              #
#    Updated: 2017/07/14 20:11:55 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = main.cpp mutantstack.cpp  

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror 
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	g++ $(CFLAGS) -o $(NAME) $(OBJ) -Imutantstack.hpp  

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)
