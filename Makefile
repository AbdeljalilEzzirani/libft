NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

src =		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

B_SRCS =		ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \

OBJ = $(SRC:%.c=%.o)

B_OBJ = $(B_SRCS:%.c=%.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

bonus:$(B_OBJ)
	$(AR) $(NAME) $(B_OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
