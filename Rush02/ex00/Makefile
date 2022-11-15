SRCS = ft_find.c ft_findone.c ft_print_value.c ft_dizaine.c main.c write_numbers.c ft_putstr.c
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02
OBJS = ${SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: 		${NAME}	

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}
