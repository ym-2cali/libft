# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yael-maa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 01:53:50 by yael-maa          #+#    #+#              #
#    Updated: 2024/10/27 00:15:57 by yael-maa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_isalpha.c ft_isdigit.c ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \

OFILES = $(CFILES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):$(OFILES)
	@ar rcs $(NAME) $(OFILES)

clean:
	@rm -f $(OFILES)

%.o: %.c  libft.h
	@$(CC) -c $< -o $@

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean
