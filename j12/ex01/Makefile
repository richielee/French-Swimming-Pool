# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rili <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 21:01:12 by rili              #+#    #+#              #
#    Updated: 2017/03/29 21:18:45 by rili             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAG = -Wall -Werror -Wextra
SRC = ft_cat.c
OBJ = ft_cat.o

all: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(FLAG)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
