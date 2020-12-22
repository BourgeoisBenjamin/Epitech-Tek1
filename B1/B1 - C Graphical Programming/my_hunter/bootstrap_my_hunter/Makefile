##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	CSFML_initiation

FILES	=	main.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I include

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
