##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of Infinadd Project
##

NAME	=	unit_tests

SRC	=	../src/all_check.c	\
		../src/fs_open_file.c	\
		../src/fs_get_number_from_first_line.c	\
		../src/mem_alloc.c	\
		../src/get_nb_cols.c	\
		../src/create_str.c	\
		../src/str_to_2d_array.c	\
		../src/check_str.c	\
		../src/mem_alloc_2d_array.c	\
		../src/resolve_map.c	\
		../src/replace_display_map.c	\

SRC_TEST	=	tests_test_argc.c	\
			tests_redirect.c	\
			tests_get_nb_cols.c	\

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
