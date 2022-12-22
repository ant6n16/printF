# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 19:39:00 by antdelga          #+#    #+#              #
#    Updated: 2022/12/13 18:11:58 by antdelga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT_R = ./Libft
LIBFT = ${LIBFT_R}/libft.a

SRCS	=	ft_printf.c \
			ft_check_input.c \
			ft_type.c \
			ft_replace_arg.c \
			ft_putchar_fd_cont.c \
			ft_char.c \
			ft_integer.c \
			ft_string.c \
			ft_itoa_long.c \
			ft_uint.c \
			ft_itoa_hex.c \
			ft_pointer.c \
			ft_hex.c \
			ft_hex_mayus.c \

OBJS	=	${SRCS:.c=.o}

CC		=	gcc
CFLAGS	=   -Wall -Wextra -Werror

.c.o:	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${LIBFT_R}

all:	${LIBFT} ${NAME}

${LIBFT}:
	make -C ${LIBFT_R}

${NAME}:	${OBJS}
	cp ${LIBFT} ${NAME}
	ar crs ${NAME} ${OBJS}

clean:
	make clean -C ${LIBFT_R}
	rm -f ${OBJS} ${BONUS_OBJS}

fclean:	clean
	rm -f ${NAME}
	make fclean -C ${LIBFT_R}

re:	fclean all

.PHONY:	all clean fclean re libft
