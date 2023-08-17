NAME = do-op

SRC = main.c operations.c print.c ft_atoi.c ft_do_op.c

PREFIX = ./srcs/

HEADER = ./includes/

SRCS = ${addprefix ${PREFIX}, ${SRC}}

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

#règle implicite dans un Makefile qui indique comment générer un fichier objet (.o) à partir d'un fichier source (.c)
.c.o:
	${CC} ${CFLAGS} -c -I ${HEADER} $< -o ${<:.c=.o}

#compile l'exécutable ${NAME} en utilisant les fichiers objets ${OBJS}
${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean : 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re