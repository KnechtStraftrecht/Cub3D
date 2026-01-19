# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 18:55:23 by hkullert          #+#    #+#              #
#    Updated: 2026/01/19 19:43:37 by hkullert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Cub3D

CC			= cc

CFLAGS		= -Wall -Werror -Wextra -g

INCLUDES	= -I$(LIBFT_PATH) \
	-I./srcs/GeneralHeaders/Structs \
	-I./srcs/GeneralHeaders/Cleanups \
	-I./srcs/ErrorHandling/ErrorHeaders \
	-I./srcs/Parsing \
	-I./srcs/TestFunctions

LIBFT_PATH	= ./Libraries/Libft

LIBFT		= $(LIBFT_PATH)/libft.a

SRCS		= srcs/Main/main.c

OBJS		= $(SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT) $(OBJS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
