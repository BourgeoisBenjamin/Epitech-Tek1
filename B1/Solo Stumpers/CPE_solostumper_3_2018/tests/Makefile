##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test
##

NAME	=	unit_tests

SRC	=	../src/check_number.c	\
		../src/my_puterror.c	\
		../src/my_strlen.c	\
		../src/fazzbizz.c	\

SRC_TEST	=	tests_check_number.c	\
			tests_my_strlen.c	\
			tests_fazzbizz.c	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -Werror -I../include

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
