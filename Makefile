# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 09:02:29 by nagmor            #+#    #+#              #
#    Updated: 2023/11/15 11:33:40 by nagmor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long
LIBFT		= ./libs/libft/libft.a
MINILIBX	= ./libs/minilibx-linux/libmlx.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
MFLAGS		= -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11
REMOVE		= rm -f

SRCS		= sources/main.c
OBJS		= $(SRCS:%.c=%.o)

GREEN			= \033[0;32m
RED				= \033[0;31m
RESET			= \033[0m
INCLUDE_MLX =	-I/usr/include -Imlx

all:		${LIBFT} ${NAME}

.c.o:
			$(CC) $(CFLAGS) ${INCLUDE_MLX} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${INCLUDE_MLX} $^ -L./libs/minilibx-linux ${MFLAGS} -o ${NAME}
			@echo "${NAME}: $(GREEN)$(NAME) was compiled.$(RESET)"
			@echo


${LIBFT}:
			@echo
			make bonus -C libs/libft

${MINILIBX}:
			@echo
			make -C libs/minilibx-linux

fclean:
				${REMOVE} ${NAME}
				@echo "${NAME}: ${RED}${NAME} was deleted${RESET}"
				@echo