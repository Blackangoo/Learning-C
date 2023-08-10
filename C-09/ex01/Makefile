SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c

PREFIX = ./srcs/

HEAD = ./includes/

NAME = libft.a

SRCS = ${addprefix ${PREFIX}, ${SRC}} #la liste complète des chemins vers les fichiers sources

OBJS = ${SRCS:.c=.o} #la liste complète des noms de fichiers objets correspondants

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc #créer ou mettre à jour des archives statiques (bibliothèques) et rc spécifie que l'archive doit être créée ou modifiée en remplaçant les fichiers s'ils existent déjà ou en les créant s'ils n'existent pas.

RM = rm -f # supprimer des fichiers, -f sans demander de confirmation

all: ${NAME}

#ègle implicite qui indique comment générer un fichier objet (.o) à partir d'un fichier source 
.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}
#-I includes : Cela spécifie au compilateur de chercher les fichiers d'en-tête dans le répertoire includes.
#-c : C'est une option pour demander au compilateur de générer un fichier objet plutôt qu'un exécutable.
#$< : C'est une variable automatique qui fait référence au fichier source actuel dans la règle, c'est-à-dire le fichier .c que vous souhaitez compiler.
#${<:.c=.o} : Cette expression substitue l'extension .c du fichier source par .o, transformant ainsi le nom du fichier source en le nom du fichier objet correspondant.

${NAME} : ${OBJS} #pour construire la bibliothèque, il faut d'abord compiler les fichiers source en fichiers objets.
	${AR} ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re #signifie que ces cibles ne représentent pas des fichiers physiques à créer, mais plutôt des actions spécifiques à exécuter.