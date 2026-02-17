# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 18:55:23 by hkullert          #+#    #+#              #
#    Updated: 2026/02/16 21:32:12 by hkullert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Cub3D

CC				= cc

CFLAGS			= -Wall -Werror -Wextra -Iincludes -I/usr/include -g

MLX_FLAGS		= -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11

MAKEFLAGS		+= --silent

INCLUDES		= -I$(LIBFT_PATH) \
				-I./srcs/Main \
				-I./srcs/GeneralHeaders/Structs \
				-I./srcs/GeneralHeaders/Cleanups \
				-I./srcs/ErrorHandling/ErrorHeaders \
				-I./srcs/Parsing \
				-I./srcs/TestFunctions

LIBFT_PATH		= ./Libraries/Libft

LIBFT			= $(LIBFT_PATH)/libft.a

MINILIBX_PATH	= ./Libraries/minilibx-linux

MINILIBX		= $(MINILIBX_PATH)/libmlx.a


SRCS			= srcs/Main/Main.c \
				srcs/ErrorHandling/GeneralErrors1.c \
				srcs/ErrorHandling/ParsingErrors1.c \
				srcs/ErrorHandling/ParsingErrors2.c \
				srcs/GeneralHeaders/Structs/InitializeTextures.c \
				srcs/GeneralHeaders/Structs/InitializeMap.c \
				srcs/GeneralHeaders/Structs/InitializeMlx.c \
				srcs/GeneralHeaders/Structs/InitializeImage.c \
				srcs/GeneralHeaders/Structs/InitializeGameData.c \
				srcs/GeneralHeaders/Cleanups/FreeMap.c \
				srcs/GeneralHeaders/Cleanups/FreeTextures.c \
				srcs/GeneralHeaders/Cleanups/FreeMlx.c \
				srcs/GeneralHeaders/Cleanups/FreeImage.c \
				srcs/GeneralHeaders/Cleanups/FreeGameData.c \
				srcs/Parsing/Parser.c \
				srcs/Parsing/FileCheck.c \
				srcs/Parsing/ReadFile.c \
				srcs/Parsing/ReadFile_Helpers1.c \
				srcs/Parsing/ReadFile_Helpers2.c \
				srcs/Parsing/MapCheck.c \
				srcs/Parsing/TextureCheck.c \
				srcs/TestFunctions/PrintMap.c \
				srcs/TestFunctions/PrintTextures.c

OBJS			= $(SRCS:.c=.o)

$(NAME): $(OBJS) $(MINILIBX) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAGS) $(LIBFT) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
	@$(MAKE) -C $(MINILIBX_PATH)

all: $(NAME)

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean
	@rm -f $(OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
