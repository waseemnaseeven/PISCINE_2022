# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 12:33:05 by wnaseeve          #+#    #+#              #
#    Updated: 2022/08/30 18:02:38 by wnaseeve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c
		
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

HEAD	= includes

INCS	= -I ${HEAD}

LIB	= ar rc

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} ${INCS}

$(NAME):	${OBJS} 
		${LIB} ${NAME} ${SRCS} ${OBJS}

all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
