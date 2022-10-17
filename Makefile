NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
ft_strlen.c ft_isprint.c\
ft_isalnum.c ft_isascii.c ft_memmove.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)
clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME) 

re: fclean all

.PHONY: clean fclean re