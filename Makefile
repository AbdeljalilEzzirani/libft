SRC =	ft_isascii.c \
		ft_lstclear.c\
		ft_lstsize.c \
		ft_putchar_fd.c \
		ft_strdup.c \
		ft_strmapi.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_lstdelone.c \
		ft_memchr.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_lstiter.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_lstlast.c \
		ft_memcpy.c \
		ft_putstr_fd.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_isalnum.c \
		ft_lstadd_back.c \
		ft_lstmap.c \
		ft_memmove.c \
		ft_split.c \
		ft_strlcpy.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_lstadd_front.c \
		ft_lstnew.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_substr.c \

OBJ = $(SRC:.c=.o)

SRC_BONUS	=	ft_lstadd_front.c \
			ft_lstmap.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lstiter.c \
			ft_lstdelone.c \
			ft_lstsize.c \
			ft_lstclear.c\
			ft_lstnew.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "libft.a is te9aadaaat"

%.o : %.c libft.h
	@$(CC) $(FLAGS) -c $<

.PHONY: all clean fclean re bonus

all : $(NAME)

bonus : all $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ_BONUS)

clean:
	@rm -rf $(OBJ)
	@echo "fichier.o is temehaaaaw"

fclean: clean
	@rm -rf $(NAME)
	@echo "clean salaat"
	@echo "libft.a is mehiiinahaaa"
	@echo "fclean is salaat"

re: fclean all
