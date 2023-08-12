NAME = ft_display_file

SRC = ft_display_file.c

PREFIX = ./srcs/

SRCS = ${addprefix ${PREFIX}, ${SRC}}

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean : 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: all clean fclean