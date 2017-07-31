#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/31 12:00:20 by akassil           #+#    #+#              #
#    Updated: 2017/07/31 13:48:27 by akassil          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a
SRCS= ft_atoi.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c
OBJ = $(patsubst %.c, %.o, $(SRCS))
#OBJ=  ft_atoi.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o

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
