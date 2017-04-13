# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/20 21:43:11 by cde-laro          #+#    #+#              #
#    Updated: 2016/07/21 13:54:46 by cde-laro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./srcs/ft_print_param_file.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/main.c 

OBJ = ft_print_param_file.o \
	  ft_putstr.o \
	  main.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
