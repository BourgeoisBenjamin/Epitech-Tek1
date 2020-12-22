##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my 102architect
##

NAME	=	102architect

FILES	=	src/main.c	\
		src/usage.c	\
		src/architect.c	\
		src/option.c	\
		src/translation.c	\
		src/scaling.c	\
		src/rotation.c	\
		src/symmetry.c	\
		src/calcul_final_matrice.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lm

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re
