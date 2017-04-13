# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 08:32:54 by cde-laro          #+#    #+#              #
#    Updated: 2016/11/04 11:44:24 by cde-laro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

OBJ = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

HEADERS = includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADERS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
