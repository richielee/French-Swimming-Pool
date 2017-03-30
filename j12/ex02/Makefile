# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rili <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 21:01:12 by rili              #+#    #+#              #
#    Updated: 2017/03/29 21:23:34 by rili             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAG = -Wall -Werror -Wextra
SRC = ft_tail.c
OBJ = ft_tail.o

all: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(FLAG)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
