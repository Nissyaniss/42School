# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 14:53:58 by ylasbord          #+#    #+#              #
#    Updated: 2022/08/02 21:05:16 by ylasbord         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	srcs/ft_putchar.c \
		srcs/ft_putstr.c   \
		srcs/ft_strcmp.c    \
		srcs/ft_strlen.c     \
		srcs/ft_swap.c

NAME = libft.a

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I./includes

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all