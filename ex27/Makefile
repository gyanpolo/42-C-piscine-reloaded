# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 18:04:15 by gpolo             #+#    #+#              #
#    Updated: 2024/06/14 19:09:29 by gpolo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ft_display_file

SOURCES 	:= src/ft_putchar.c  src/ft_putstr.c  src/main.c  src/open.c 

OBJECTS 	:= src/ft_putchar.o  src/ft_putstr.o  src/main.o  src/open.o

CC			:= gcc

FLAGS		:= -Wall -Werror -Wextra

AR			:= ar rcs

all :		$(NAME)

$(NAME) : 	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $@

clean :
			rm -f $(OBJECTS)

fclean : 	clean
			rm -f $(NAME)

.PHONY: all clean fclean

