NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
SRC =	$(SRC_DIR)/Sources/dispatcher.c \
		$(SRC_DIR)/Sources/parse.c \
		$(SRC_DIR)/Sources/push_swap.c \
		$(SRC_DIR)/Sources/push.c \
		$(SRC_DIR)/Sources/radix.c \
		$(SRC_DIR)/Sources/reverse_rotate.c \
		$(SRC_DIR)/Sources/rotate.c \
		$(SRC_DIR)/Sources/small_sort.c \
		$(SRC_DIR)/Sources/stack_utils_1.c \
		$(SRC_DIR)/Sources/stack_utils_2.c \
		$(SRC_DIR)/Sources/swap.c \
		$(SRC_DIR)/Sources/radix_2.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

FTPRINTF_DIR = ft_printf
FTPRINTF_A = $(FTPRINTF_DIR)/ft_printf.a

all: $(LIBFT_A) $(FTPRINTF_A) $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(FTPRINTF_A):
	$(MAKE) -C $(FTPRINTF_DIR)

$(NAME): $(OBJ) $(LIBFT_A) $(FTPRINTF_A)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) $(FTPRINTF_A) -o $(NAME)
# 	cp $(LIBFT_A) $(NAME)
# 	cp $(FTPRINTF_A) $(NAME)
# 	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FTPRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
