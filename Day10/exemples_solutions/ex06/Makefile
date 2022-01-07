# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dleurs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/08 20:57:05 by dleurs            #+#    #+#              #
#    Updated: 2018/08/08 20:57:07 by dleurs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_do_op.c srcs/ft_display.c srcs/ft_atoi.c srcs/ft_add.c srcs/ft_sub.c srcs/ft_div.c srcs/ft_mod.c srcs/ft_mul.c
HEADER = includes

all: $(NAME)

$(NAME):
	gcc -I $(HEADER) -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	/bin/rm -f $(NAME)

re: clean all
