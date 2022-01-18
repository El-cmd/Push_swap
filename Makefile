# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 03:11:20 by vlothlinux        #+#    #+#              #
#    Updated: 2022/01/18 04:18:34 by vlothlinux       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=  gcc
CFLAGS	= -Wall -Werror -Wextra -c 
NAME	= push_swap
SRC		= push_swap.c

OBJ		= $(SRC:.c=.o)


all: $(NAME)



$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
	  rm -rf $(OBJ)
	  
re: fclean all