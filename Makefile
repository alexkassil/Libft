#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/31 12:00:20 by akassil           #+#    #+#              #
#    Updated: 2017/07/31 12:04:38 by akassil          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a
SRCS= ft_atoi.c
OBJ=  ft_atoi.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -c
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
