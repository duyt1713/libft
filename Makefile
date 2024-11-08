# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:45:39 by duha              #+#    #+#              #
#    Updated: 2024/11/07 16:34:28 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_striteri.c \
ft_strlen.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c \
ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_calloc.c ft_isdigit.c \
ft_memcmp.c ft_putchar_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strdup.c ft_strlcpy.c
ft_strnstr.c ft_tolower.c split.c
BONUS =
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
