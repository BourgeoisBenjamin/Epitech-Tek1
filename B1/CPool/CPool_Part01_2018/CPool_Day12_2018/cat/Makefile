##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my cat project
##

NAME	=	cat

FILES	=	cat.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./../lib/includes

lib:
	$(MAKE) -C ./../lib/my
	$(MAKE) all
	$(MAKE) unittest

unittest:
	gcc -o ../tests/unit_tests ../tests/unit_tests_cat.c --coverage -lcriterion -lmy -L./../lib/ -I ../lib/includes

all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME) -lmy -L./../lib

clean:
	$(MAKE) -C ./../lib/my clean
	$(RM) $(OBJECTS)
	$(RM) ../tests/unit_tests

fclean:	clean
	$(RM) $(NAME)
	$(RM) ../tests/unit_tests

re:	fclean lib
