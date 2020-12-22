##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my bsq project
##

NAME	=	bsq

FILES	=	src/bsq.c	\
		src/all_check.c	\
		src/fs_open_file.c	\
		src/fs_get_number_from_first_line.c	\
		src/mem_alloc.c	\
		src/get_nb_cols.c	\
		src/create_str.c	\
		src/str_to_2d_array.c	\
		src/check_str.c	\
		src/mem_alloc_2d_array.c	\
		src/resolve_map.c	\
		src/replace_display_map.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I include

LDFLAGS	=	-lmy -L./lib

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C tests/

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./tests fclean
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
