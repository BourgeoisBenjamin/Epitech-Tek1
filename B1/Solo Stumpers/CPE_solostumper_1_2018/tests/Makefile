##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test
##

NAME	=	unit_tests

SRC	=	../src/main.c	\

SRC_TEST	=	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -I../include

LDFLAGS	=	--coverage -lcriterion

CC	=	gcc

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS) $(LDFLAGS)
	./$(NAME)

clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all

.PHONY: all clean fclean re
