# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 03:11:20 by vlothlinux        #+#    #+#              #
#    Updated: 2022/01/19 04:28:42 by vlothlinux       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=  gcc
CFLAGS	= -Wall -Werror -Wextra -c 
NAME	= push_swap
SRC		= push_swap.c \
          srcs/ft_atoi.c \
		  srcs/init_stack.c \
		  srcs/operation.c

OBJ		= $(SRC:.c=.o)


all: $(NAME)



$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
	  rm -rf $(OBJ)
	  
re: fclean all