# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malavent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 09:23:04 by malavent          #+#    #+#              #
#    Updated: 2018/09/16 13:24:01 by malavent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strcmp.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c \

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC: .c = .o)

INCLUDES = ./includes/

all : $(NAME)
	
$(NAME) : 
	$(CC) -c $(SRCS) -I $(INCLUDES)
	ar rc libft.a $(OBJS)
	ranlib libft.a

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all
