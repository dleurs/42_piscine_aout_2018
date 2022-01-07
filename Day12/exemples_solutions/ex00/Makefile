# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dleurs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 17:49:30 by dleurs            #+#    #+#              #
#    Updated: 2018/08/16 17:49:31 by dleurs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FILEC = ft_display_file_main.c
FLAGS =-Wall -Wextra -Werror
OBJ = ft_display_file_main.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILEC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
