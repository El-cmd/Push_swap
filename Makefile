# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vloth <vloth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 03:11:20 by vlothlinux        #+#    #+#              #
#    Updated: 2022/01/25 15:46:18 by vloth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=  gcc
CFLAGS	= -Wall -Werror -Wextra -c 
NAME	= push_swap
SRC		= push_swap.c \
          srcs/ft_atoi.c \
		  srcs/init_stack.c \
		  srcs/operation.c	\
		  srcs/operation_suite.c

OBJ		= $(SRC:.c=.o)


all: $(NAME)



$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
	  rm -rf $(OBJ)
	  
re: fclean all