##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	unit_tests

SRC	=	../get_next_line.c	\

SRC_TEST	=	tests_getnextline_big.c	\
				tests_getnextline_small.c	\
				tests_getnextline_empty.c	\
				tests_getnextline_noexist.c	\
				tests_getnextline_fun.c	\
				tests.c	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -I../

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
