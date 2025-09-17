NAME = push_swap.a
EXEC = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
SRC =	$(SRC_DIR)/Sources/dispatcher.c \
		$(SRC_DIR)/Sources/ft_printf.c \
		$(SRC_DIR)/Sources/parse.c \
		$(SRC_DIR)/Sources/push_swap.c \
		$(SRC_DIR)/Sources/push.c \
		$(SRC_DIR)/Sources/radix.c \
		$(SRC_DIR)/Sources/reverse_rotate.c \
		$(SRC_DIR)/Sources/rotate.c \
		$(SRC_DIR)/Sources/small_sort.c \
		$(SRC_DIR)/Sources/stack_utils_1.c \
		$(SRC_DIR)/Sources/stack_utils_2.c \
		$(SRC_DIR)/Sources/swap.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT_A)
	cp $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(LIBFT_A) -o $(EXEC)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
