CC		=  gcc
CFLAGS	= -Wall -Werror -Wextra -c 
NAME	= push_swap
SRC		= push_swap.c \
		  srcs/fivesort.c \
		  srcs/init_a.c \
		  srcs/init.c \
		  srcs/init2.c \
		  srcs/operation_ss.c \
		  srcs/operation_suite.c \
		  srcs/operation.c \
		  srcs/threesort.c \
		  srcs/median.c	\
		  srcs/sort_big_data.c \
		  srcs/sort_big_data_suite.c \
		  srcs/utils.c 

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $< -g

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
