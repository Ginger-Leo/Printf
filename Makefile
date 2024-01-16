# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:54:15 by lstorey           #+#    #+#              #
#    Updated: 2023/12/07 11:25:55 by lstorey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
FLAGS		= -Wall -Werror -Wextra
LIBS 		= libftprintf.h
INCLUDES	= ./
CFILES 		=	ft_printf.c \
				utils.c \
				hex.c \
				pointer.c \
				main.c

OFILES  	= $(CFILES:.c=.o) 

$(NAME)		:	$(OFILES)
				$(MAKE) -C ./libft
			@cp libft/libft.a $(NAME)
			@ar -rcs $(NAME) $(OFILES)

%.o			:%.c
			@CC $(FLAGS) -c $< -o $@

all			:	$(NAME)

clean		:
			@rm -f $(OFILES)
			@$(MAKE) -C ./libft clean 

fclean		:	clean
			@rm -f $(NAME)
			@$(MAKE) -C ./libft fclean


re			:	fclean all

.PHONY 		: all clean fclean re 