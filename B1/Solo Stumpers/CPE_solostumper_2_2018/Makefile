##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile
##

NAME	=	anagram

FILES	=	src/main.c	\
		src/my_putstr.c	\
		src/my_strlen.c	\
		src/anagram.c	\
		src/letter_find.c	\
		src/str_uncapitalize.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I./include

all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re tests_run
