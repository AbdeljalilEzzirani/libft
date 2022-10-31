# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 21:55:42 by abez-zir          #+#    #+#              #
#    Updated: 2022/10/31 13:03:26 by abez-zir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Makefile ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c libft.h ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_substr.c ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c
OBJ = $(SRC:.c=.o)

HDR = libft.h

NAME = final

FLG = -Wall -Wextra -Werror

all:
	@gcc $(FLG) $(SRC) $(HDR) -c
	@gcc $(FLG) $(OBJ) $(HDR) -o $(NAME)
	@echo "compilation done"
clean:
