# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rili <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/27 18:58:14 by rili              #+#    #+#              #
#    Updated: 2017/03/29 18:11:01 by rili             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c \
	  $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c
OBJ = ft_putchar.o ft_strlen.o ft_swap.o ft_putstr.o ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC) $(OPTION)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
