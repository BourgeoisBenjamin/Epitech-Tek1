##
## EPITECH PROJECT, 2018
## LEM-IN
## File description:
## A simple Makefile to compile
##

NAME	=	lem_in

SRC	=	src/delete_ft.c	\
		src/lemin.c	\
		src/main.c	\
		src/parser/ants/get_nb_ants.c	\
		src/parser/end/add_end.c	\
		src/parser/end/fetch_end_room.c	\
		src/parser/room/add_room_in_index.c	\
		src/parser/room/add_room.c	\
		src/parser/room/check_valid_room.c	\
		src/parser/room/connect_rooms.c	\
		src/parser/room/create_room.c	\
		src/parser/room/get_nb_rooms.c	\
		src/parser/room/is_exist_room.c	\
		src/parser/room/is_room.c	\
		src/parser/room/is_same_co.c	\
		src/parser/start/add_start.c	\
		src/parser/start/fetch_start_room.c	\
		src/parser/tunnel/add_tunnel.c	\
		src/parser/tunnel/check_valid_tunnel.c	\
		src/parser/tunnel/fetch_room.c	\
		src/parser/tunnel/is_tunnel.c	\
		src/parser/check_line.c	\
		src/parser/check_room_or_tunnel.c	\
		src/parser/create_graph.c	\
		src/parser/parser.c	\
		src/dijkstra/dijkstra.c	\
		src/display_move.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

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
