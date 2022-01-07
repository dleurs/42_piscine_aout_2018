# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dleurs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 13:20:02 by dleurs            #+#    #+#              #
#    Updated: 2018/08/17 13:20:05 by dleurs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FILEC = ft_cat.c
FLAGS =-Wall -Wextra -Werror
OBJ = ft_cat.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILEC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
