##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of Infinadd Project
##

NAME	=	unit_tests

SRC	=	../eval_expr.c	\
		../number.c	\
		../parse_expression.c	\
		../operations.c	\

SRC_TEST	=	tests_is_parenthesis.c	\
			tests_number.c	\
			tests_adv_op.c	\
			tests_simple_op.c	\
			tests_replace_spaces.c	\

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
