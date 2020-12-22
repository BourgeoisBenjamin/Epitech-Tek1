##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	104intersection

FILES	=	src/main.c	\
			src/usage.c	\
			src/intersection.c	\
			src/options.c	\
			src/my_str_isnum.c	\
			src/sphere.c	\
			src/cylinder.c	\
			src/cone.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I./include

LDFLAGS	=	-lm

all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
