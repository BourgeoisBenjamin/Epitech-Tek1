##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my_sokoban project
##

NAME	=	my_sokoban

FILES	=	src/main.c	\
			src/check_command.c	\
			src/create_str.c	\
			src/mem_alloc.c	\
			src/sokoban.c	\
			src/find_nb_rows_cols.c	\
			src/tab.c	\
			src/game.c	\
			src/display_map.c	\
			src/main_check.c	\
			src/game_check.c	\
			src/movements.c	\
			src/update_map.c	\
			src/free_all.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lncurses

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
