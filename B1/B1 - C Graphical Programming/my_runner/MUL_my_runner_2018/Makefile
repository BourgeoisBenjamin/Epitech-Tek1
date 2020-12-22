##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile
##

NAME	=	my_runner

FILES	=	src/main.c	\
			src/usage.c	\
			src/linkedlist/create_object.c	\
			src/linkedlist/init_list.c	\
			src/linkedlist/delete_list.c	\
			src/linkedlist/delete_node.c	\
			src/linkedlist/delete_node_address.c	\
			src/init/init.c	\
			src/sprite/add_sprite.c	\
			src/sprite/move_rect.c	\
			src/draw_sprite/draw_all_sprite.c	\
			src/destroy/destroy.c	\
			src/parser/init_parser.c	\
			src/parser/parser.c	\
			src/parser/check_map.c	\
			src/parser/create_map.c	\
			src/event/event.c	\
			src/event/is_jump.c	\
			src/event/is_lose.c	\
			src/event/is_pause.c	\
			src/event/is_restart.c	\
			src/parallax/init_parallax.c	\
			src/parallax/parallax.c	\
			src/game/game_main.c	\
			src/game/life.c	\
			src/entities/move_entities.c	\
			src/menu/init_menu.c	\
			src/menu/menu.c	\
			src/pause/init_pause.c	\
			src/end/init_end.c	\
			src/win/init_win.c	\
			src/win/is_win.c	\
			src/text/create_text.c	\
			src/text/create_score.c	\
			src/score/score.c	\
			src/player/init_player.c	\
			src/player/player.c	\
			src/player/is_enemy.c	\
			src/player/manage_fall.c	\
			src/player/manage_jump.c	\
			src/player/is_on_platform.c	\
			src/infinity/infinity.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: $(NAME)

$(NAME)	:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re
