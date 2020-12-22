##
## EPITECH PROJECT, 2018
## TETRIS
## File description:
## A simple Makefile to compile
##

NAME	=	tetris

SRC	=	src/arg/arg_debug.c							\
		src/arg/arg_help.c							\
		src/arg/arg_key_drop.c						\
		src/arg/arg_key_left.c						\
		src/arg/arg_key_pause.c						\
		src/arg/arg_key_quit.c						\
		src/arg/arg_key_right.c						\
		src/arg/arg_key_turn.c						\
		src/arg/arg_level.c							\
		src/arg/arg_next.c							\
		src/arg/arg_size.c							\
		src/arg/is_same_key.c						\
		src/arg/parse_argument.c					\
		src/arg/run_get_opt.c						\
		src/arg/verif_argument.c					\
		src/arg/wrong_argument.c					\
		src/delete/delete_all.c						\
		src/delete/delete_game.c					\
		src/delete/delete_settings.c				\
		src/delete/delete_tetriminos_array.c		\
		src/delete/delete_tetriminos.c				\
		src/display/display_board_game.c			\
		src/display/display_game.c					\
		src/display/display_next_tetriminos.c		\
		src/display/display_stats.c					\
		src/game/add_tetrimino_in_boardgame.c		\
		src/game/check_line.c						\
		src/game/game.c								\
		src/game/is_contact.c						\
		src/game/loop_game.c						\
		src/game/manage_clock.c						\
		src/game/manage_contact.c					\
		src/game/movement_tetriminos.c				\
		src/init/init_array_game.c					\
		src/init/init_border.c						\
		src/init/init_game.c						\
		src/init/init_next_tetriminos.c				\
		src/init/init_settings.c					\
		src/init/init_tetriminos_array.c			\
		src/init/init.c								\
		src/input/key_drop_ft.c						\
		src/input/key_left2_ft.c					\
		src/input/key_pause_ft.c					\
		src/input/key_quit_ft.c						\
		src/input/key_right2_ft.c					\
		src/input/key_turn_ft.c						\
		src/input/read_key.c						\
		src/input/set_input_term.c					\
		src/tetriminos/add_tetriminos.c				\
		src/tetriminos/get_form_tetrimino.c			\
		src/tetriminos/get_name_tetrimino.c			\
		src/tetriminos/get_size_color_tetrimino.c	\
		src/tetriminos/get_tetriminos.c				\
		src/tetriminos/init_new_tetrimino.c			\
		src/tetriminos/is_tetrimino_file.c			\
		src/tetriminos/open_dir_tetriminos.c		\
		src/tetriminos/open_file.c					\
		src/tetriminos/parse_file_tetriminos.c		\
		src/tetriminos/sort_tetriminos_tab.c		\
		src/debug_mode.c							\
		src/help.c									\
		src/main.c									\
		src/tetris.c								\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lncurses

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

debug: $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) -g

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
