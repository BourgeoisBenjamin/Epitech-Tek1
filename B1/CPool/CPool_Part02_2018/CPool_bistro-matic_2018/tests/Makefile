##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of Infinadd Project
##

NAME	=	unit_tests

SRC	=	../src/syntax/check_usage.c	\
		../src/eval/my_atoi.c	\

SRC_TEST	=	tests_check_ops.c	\
			tests_check_base.c	\
			tests_my_atoi.c	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-I ../lib/include -I ../include

LDFLAGS	=	-L./../lib/ --coverage -lmy -lcriterion

CC	=	gcc

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS) $(LDFLAGS)
	./$(NAME)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all

.PHONY: all clean fclean re
