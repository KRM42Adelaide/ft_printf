# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 12:27:45 by kmachaka          #+#    #+#              #
#    Updated: 2022/08/02 14:01:04 by kmachaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
INCLUDE = -I .
ARCHIVE = ar rc

SRCS = ft_printf.c \
	   ft_printf_char.c \
	   ft_printf_str.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_printf_hex.c \
	   ft_printf_number.c \
	   ft_printf_ptr.c \
	   ft_printf_u.c \
	   ft_type.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(INCLUDE) -c $(SRCS)
	$(ARCHIVE) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	-rm $(OBJ)

fclean:
	-rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
