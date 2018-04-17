NAME = libft.a 

CC = gcc -c

CFLAGS = -Wall -Werror -Wextra -I

DEPS = libft.h

SRC = 	ft_putstr.c \
		ft_putchar.c \

OBJ = $(SRC:.c=.o)

$(NAME):
	@$(CC) $(CFLAGS) $(DEPS) $(SRC)
	@ar rc $(NAME) $(OBJ)

all:
	$(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME)

re: fclean all
