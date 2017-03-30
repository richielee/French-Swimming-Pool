# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rili <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/28 16:26:31 by rili              #+#    #+#              #
#    Updated: 2017/03/28 16:38:46 by rili             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAG = -Wall -Wextra -Werror
SRC = ft_doop.c helpers.c
OBJ = ft_doop.o helpers.o

all: $(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) $(FLAG)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
