# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 08:59:33 by mnassi            #+#    #+#              #
#    Updated: 2022/10/16 10:49:46 by mnassi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
CC = clang
NAME = libft.a
SRC = ft_strlen.c \
		ft_strlcat \
		main.c

all : $(NAME)

$(NAME) : main.o ft_strlen.o ft_strlcat.o
	$(CC) -o $(NAME) ft_strlen.o main.o ft_strlcat.o $(FLAGS)

main.o : main.c
	$(CC) -o main.o -c main.c $(FLAGS)

ft_strlcat.o : ft_strlcat.c
	$(CC) -o ft_strlcat.c -c ft_strlcat.o $(FLAGS)

ft_strlen.o : ft_strlen.c
	$(CC) -o ft_strlen.o -c ft_strlen.c $(FLAGS)

clean :
	rm -rf *.o

re :
	rm -rf *.a
	rm -rf *.o

	