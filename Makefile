# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabda <aabda@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 20:58:10 by aabda             #+#    #+#              #
#    Updated: 2022/11/07 15:04:58 by aabda            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
DIR		= srcs/
CC		= gcc
FLAGS	= -Wall -Wextra -Werror

SRCS = $(DIR)ft_push.c $(DIR)ft_reverse_rotate.c \
	$(DIR)ft_rotate.c $(DIR)ft_split.c \
	$(DIR)ft_swap.c $(DIR)libft_utils.c \
	$(DIR)logic.c $(DIR)node.c \
	$(DIR)utils.c $(DIR)main.c \
	$(DIR)ft_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

norm:
	norminette -R CheckDefine

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re norm