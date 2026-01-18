# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 20:16:18 by pbrandes          #+#    #+#              #
#    Updated: 2025/10/05 19:25:23 by hkullert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_itoa.c \
	ft_memcpy.c \
	ft_strncmp.c \
	ft_strtrim.c \
	ft_atoi.c \
	ft_memmove.c \
	ft_putstr_fd.c \
	ft_striteri.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_memset.c \
	ft_strjoin.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_isalnum.c \
	ft_putchar_fd.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_isalpha.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_isascii.c \
	ft_putendl_fd.c \
	ft_split.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_strmapi.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_strdup.c \
	ft_substr.c \
	ft_printf.c \
	ft_decide.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putint.c \
	ft_countnbr.c \
	ft_putx.c \
	ft_putbigx.c \
	ft_putpointer.c \
	ft_check.c \
	ft_putuns.c \
	get_next_line_utils.c \
	get_next_line.c \
	ft_strlen_solong.c \
	ft_strjoin_solong.c \
	ft_count_chr.c \
	ft_strrstr.c \
	free_double_ptr.c \
	ft_cut_til_cwc.c \
	ft_str_mltpl_join.c \
	ft_strcmp.c \
	ft_tablen.c \
	ft_tabledup.c \
	ft_tableadd_back.c \
	ft_strndup.c \
	ft_size_wo_c.c \
	ft_iswhsp.c \
	ft_rm_whsp.c \
	ft_strlen_from_c.c \
	ft_str_dup_till.c \
	ft_tableadd_sh.c \
	ft_strjoin_free1.c \
	ft_str_dup_from.c \
	ft_print_table.c \
	ft_str_dup_till2.c \
	ft_strcmp_till.c \
	bubble_sort.c \
	ft_app_wsub.c \
	ft_app_from.c \
	ft_taddb_free.c \
	ft_cut_bc.c \
	ft_strlen_till_c.c \
	ft_tabjoin.c \
	ft_tabdel.c \
	ft_strrtrim.c


OBJ = $(SRC:.c=.o)

SRCB = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

OBJB = $(SRCB:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g -fPIC

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJ) $(OBJB)

.PHONY: all clean fclean re bonus
