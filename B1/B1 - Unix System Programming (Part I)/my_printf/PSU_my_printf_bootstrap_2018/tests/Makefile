##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of my_printf Project
##

NAME	=	unit_tests

SRC_TEST=	tests_sum_stdarg.c	\
		tests_disp_stdarg.c	\

OBJECTS	=	$(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -Werror

LDFLAGS	=	--coverage -lcriterion -lmy -L./../

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
