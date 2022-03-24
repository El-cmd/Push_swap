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
<<<<<<< HEAD
		  srcs/check_error.c \
		  srcs/big_sort.c \
		  srcs/five_hundred.c \
		  srcs/free_britney.c \
=======
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4
		  srcs/utils.c

NAME_BONUS = checker
SRC_BONUS = SRC_checker/checker.c \
			SRC_checker/src/gestion_dl.c \
			SRC_checker/src/gestion_dls.c \
			SRC_checker/src/op.c \
			SRC_checker/src/op_s.c \
			SRC_checker/src/op_ss.c \
			SRC_checker/src/util.c \
			SRC_checker/src/get-nl/get_next_line.c \
			SRC_checker/src/get-nl/get_next_line_utils.c \
			SRC_checker/src/init_stack.c \
<<<<<<< HEAD
			SRC_checker/src/do_op.c \
			SRC_checker/src/free_all.c \
			SRC_checker/src/ft_duplicate.c \
			SRC_checker/src/its_sort.c
=======
			SRC_checker/src/do_op.c
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4

OBJ		= $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME) $(NAME_BONUS)
all_bonus: $(NAME_BONUS)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

$(NAME_BONUS): $(OBJ_BONUS)
			$(CC) $(OBJ_BONUS) -o $(NAME_BONUS)	

%.o: %.c
	$(CC) $(CFLAGS) -D BUFFER_SIZE=10 -o $@ $< -g

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(NAME_BONUS)

re: fclean all all_bonus
