##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for Unit Test of my_sokoban PROJECT
##

NAME	=	unit_tests

SRC	=	../src/check_command.c	\
		../src/create_str.c	\
		../src/mem_alloc.c	\
		../src/sokoban.c	\
		../src/find_nb_rows_cols.c	\
		../src/tab.c	\
		../src/game.c	\
		../src/display_map.c	\
		../src/main_check.c	\
		../src/game_check.c	\
		../src/movements.c	\
		../src/update_map.c	\

SRC_TEST	=	tests_redirect.c	\
				tests_get_player_position.c	\
				tests_check_argv.c	\
				tests_game_win.c	\
				tests_replace_o.c	\
				tests_game_blocked.c	\
				tests_reset_game.c	\
				tests_check_dimension.c	\
				tests_check_str.c	\
				tests_check_op_player.c	\
				tests_mem_alloc.c	\
				tests_move_up.c	\
				tests_move_down.c	\
				tests_move_left.c	\
				tests_move_right.c	\

OBJECTS	=	$(SRC:.c=.o) $(SRC_TEST:.c=.o)

CFLAGS	=	-W -Wall -Wshadow -I../lib/include -I../include

LDFLAGS	=	-L./../lib/ --coverage -lmy -lcriterion -lncurses

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
