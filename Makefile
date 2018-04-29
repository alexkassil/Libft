#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/31 12:00:20 by akassil           #+#    #+#              #
#    Updated: 2018/04/28 22:38:05 by akassil          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a
SRCS= ft_atoi.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
      ft_strncat.c ft_strlcat.c ft_strcmp.c ft_strncmp.c ft_memset.c \
      ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
      ft_memcmp.c
OBJ = $(patsubst %.c, %.o, $(SRCS))

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

# UNIT TESTS RULE
so:
	$(CC) -fPIC $(SRCS) -c
	$(CC) -shared -o libft.so $(OBJ)
