# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 08:59:33 by mnassi            #+#    #+#              #
#    Updated: 2022/10/17 09:49:03 by mnassi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
CC = clang
NAME = libft.a
SRC = ft_strlen.c \
		ft_strlcat.c \
		main.c
		
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(FLAGS)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(NAME)

re :
	rm -rf $(OBJ)
	rm -rf $(NAME)

