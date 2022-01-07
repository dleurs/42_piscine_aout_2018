# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dleurs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 15:42:11 by dleurs            #+#    #+#              #
#    Updated: 2018/08/20 15:42:12 by dleurs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FILEC = ft_tail.c ft_utilities.c
FLAGS =-Wall -Wextra -Werror
OBJ = ft_tail.o ft_utilities.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILEC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
