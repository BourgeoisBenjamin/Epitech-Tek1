##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of Infinadd Project
##

NAME	=	unit_tests

SRC	=	\

SRC_TEST	=	tests_redirect.c	\
		tests_my_put_nbr.c	\
		tests_is_flag.c	\
		tests_my_putchar.c	\
		tests_my_put_nbr_binary.c	\
		tests_my_put_nbr_hexa.c	\
		tests_my_put_nbr_hexa_capitalize.c	\
		tests_my_put_nbr_octal.c	\
		tests_my_putstr.c	\
		tests_my_putstr_np.c	\
		tests_my_printf.c	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -I../lib/include -I../include

LDFLAGS	=	-L./../lib/ --coverage -lmy -lcriterion

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
