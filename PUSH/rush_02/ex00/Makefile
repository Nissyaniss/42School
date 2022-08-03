# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylasbord <ylasbord@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 12:48:18 by ylasbord          #+#    #+#              #
#    Updated: 2022/08/01 16:14:38 by ylasbord         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_breakdown.c ft_check_error.c ft_parse.c ft_printvalue.c ft_src.c ft_src2.c ft_src3.c main.c

SRC1 = ft_breakdown.c ft_check_error.c ft_parse.c ft_printvalue.c ft_src.c ft_src2.c ft_src3.c main.c includes.h

OBJ = $(SRC:.c=.o)

NAME = ./rush-02

define banner
▀███▀▀▀██▄ ▀███▀   ▀███▀▄█▀▀▀█▄█████▀  ▀████▀▀                    
  ██   ▀██▄ ██       █ ▄██    ▀█ ██      ██                       
  ██   ▄██  ██       █ ▀███▄     ██      ██       ▄██▀▀██▄   ██▀██▄
  ███████   ██       █   ▀█████▄ ██████████      ██▀    ▀██ ██   ██
  ██  ██▄   ██       █ ▄     ▀██ ██      ██      ██      ██   ▄▄██
  ██   ▀██▄ ██▄     ▄█ ██     ██ ██      ██      ██▄    ▄██ ▄▄█▀   
▄████▄ ▄███▄ ▀██████▀▀ █▀█████▀▄████▄  ▄████▄▄    ▀██████▀  ▀██████\n
endef
export banner

all: $(NAME)

.PHONY: all BANNER $(NAME) %.o clean fclean re

BANNER:
	@clear
	@printf "\033[1;34m$$banner\033[1;00m"

$(NAME): BANNER $(OBJ)
	@echo "\033[1;31m[Linking...]\033[1;00m "$@
	@${CC} -o ${NAME} ${OBJ}
	@echo "\033[1;32m[Build finished]\033[1;00m"

%.o: %.c
	@echo "\033[1;31m[Compiling...]\033[1;00m "$<
	@${CC} -c ${SRC1} $< ${CFLAGS}

clean:
	@echo "\033[1;31m[Cleaning object files...]\033[1;00m "
	@rm ${OBJ}
	@echo "\033[1;32m[Object files cleaned]\033[1;00m "

fclean: clean
	@echo "\033[1;31m[Cleaning binary file...]\033[1;00m "
	@rm ${NAME}
	@echo "\033[1;32m[Binary file cleaned]\033[1;00m "

re: fclean all