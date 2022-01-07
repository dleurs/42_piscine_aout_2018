# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dleurs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/08 15:34:27 by dleurs            #+#    #+#              #
#    Updated: 2018/08/08 15:34:28 by dleurs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes

all: $(NAME)

$(NAME):
	gcc -c -I$(HEADER) $(SRC)
	ar rc $(NAME) $(OBJECT_O)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECT_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
