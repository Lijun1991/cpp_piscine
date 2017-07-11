# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:41:01 by lwang             #+#    #+#              #
#    Updated: 2017/07/10 20:41:03 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)


CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	g++ $(CFLAGS) -o $(NAME) $(OBJ) -IBureaucrat.hpp

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)
