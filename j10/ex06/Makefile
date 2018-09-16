# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malavent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 15:11:18 by malavent          #+#    #+#              #
#    Updated: 2018/09/16 09:36:16 by malavent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

SRCS = doop.c ft.c main.c op.c ft_atoi.c

FLAGS = -Wall -Werror -Wextra

OBJS = doop.o main.o op.o ft.o ft_atoi.o

HEADERS = "include.h" "op.h"

NAME = do-op

all :
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
