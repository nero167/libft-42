# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:35:20 by namirtha          #+#    #+#              #
#    Updated: 2024/10/21 15:54:05 by namirtha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CCFLAGS = -Wextra -Werror -Wall
SRCS = ft_bzero.c ft_isalnum.c ft_isascii.c \
    ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
    ft_memset.c ft_strlcpy.c ft_strlen.c ft_isalpha.c \
	ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c
	
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all fclean clean re