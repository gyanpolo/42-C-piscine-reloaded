# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 12:37:17 by gpolo             #+#    #+#              #
#    Updated: 2024/06/14 15:02:43 by gpolo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

SOURCES 	:= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS 	:= srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

CC			:= gcc

FLAGS		:= -Wall -Werror -Wextra

AR			:= ar rcs

all :		$(NAME)

$(NAME) : 	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $@

clean :
			rm -f $(OBJECTS)

fclean : 	clean
			rm -f $(NAME)

re : 		fclean all

.PHONY: all clean fclean re
