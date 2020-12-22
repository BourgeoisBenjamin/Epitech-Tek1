##
## EPITECH PROJECT, 2018
## MY_DEFENDER
## File description:
## A simple Makefile to compile
##

NAME	=	my_defender

SRC	=	src/main.c	\
		src/free_ft/free_all/delete_list_buttons.c	\
		src/free_ft/free_all/delete_list_musics.c	\
		src/free_ft/free_all/delete_list_objs.c	\
		src/free_ft/free_all/delete_list_texts.c	\
		src/free_ft/free_all/free_all.c	\
		src/free_ft/free_all/free_scenes.c	\
		src/event/event.c	\
		src/event/window_close.c	\
		src/event/check_click.c	\
		src/event/quit_game.c	\
		src/event/start_menu.c	\
		src/event/main_menu.c	\
		src/event/resume_menu.c	\
		src/event/is_pause.c	\
		src/event/start_game.c	\
		src/event/how_to_play_menu.c	\
		src/event/display_score.c	\
		src/event/volume.c	\
		src/drawer/draw_scene.c	\
		src/init_ft/init.c 	\
		src/init_ft/init_instance.c	\
		src/init_ft/init_renderwindow.c	\
		src/init_ft/init_game.c	\
		src/init_ft/init_main_music.c	\
		src/init_ft/init_main_menu/init_main_menu.c	\
		src/init_ft/init_main_menu/init_buttons_main_menu.c	\
		src/init_ft/init_main_menu/init_objs_main_menu.c	\
		src/init_ft/init_main_menu/init_texts_main_menu.c	\
		src/init_ft/init_pause_menu/init_buttons_pause_menu.c	\
		src/init_ft/init_pause_menu/init_objs_pause_menu.c	\
		src/init_ft/init_pause_menu/init_pause_menu.c	\
		src/init_ft/init_pause_menu/init_texts_pause_menu.c	\
		src/init_ft/init_end/init_buttons_end.c	\
		src/init_ft/init_end/init_objs_end.c	\
		src/init_ft/init_end/init_end.c	\
		src/init_ft/init_end/init_texts_end.c	\
		src/init_ft/init_htp_menu/init_htp_menu.c	\
		src/init_ft/init_htp_menu/init_texts_htp_menu.c	\
		src/init_ft/init_htp_menu/init_objs_htp_menu.c	\
		src/init_ft/init_htp_menu/init_buttons_htp_menu.c	\
		src/init_ft/init_score/init_score.c	\
		src/init_ft/init_score/init_texts_score.c	\
		src/init_ft/init_score/init_objs_score.c	\
		src/init_ft/init_score/init_buttons_score.c	\
		src/list_ft/add_tolist.c	\
		src/list_ft/delete_obj.c	\
		src/objects/create_object.c	\
		src/buttons/button_is_clicked.c	\
		src/buttons/create_button.c	\
		src/music/create_music.c	\
		src/text/create_text.c	\
		src/scenes_ft/add_scene.c	\
		src/scenes_ft/init_scene_array.c	\
		src/scenes_ft/create_scene.c	\
		src/scenes_ft/first_scene/parser/check_map.c	\
		src/scenes_ft/first_scene/parser/create_map_first_scene.c	\
		src/scenes_ft/first_scene/parser/create_map.c	\
		src/scenes_ft/first_scene/parser/open_file.c	\
		src/scenes_ft/first_scene/create_first_scene.c	\
		src/scenes_ft/first_scene/create_enemies.c	\
		src/scenes_ft/first_scene/init_buttons_first_map.c	\
		src/scenes_ft/first_scene/init_objs_first_map.c	\
		src/scenes_ft/first_scene/init_texts_first_map.c	\
		src/scenes_ft/first_scene/init_musics_first_map.c	\
		src/scenes_ft/tower/buy_tower.c	\
		src/scenes_ft/tower/posed_tower.c	\
		src/score/get_score.c	\
		src/score/save_score.c	\
		src/score/reset_score.c	\
		src/game/game_main.c	\
		src/game/manage_game.c	\
		src/game/manage_life.c	\
		src/game/manage_move.c	\
		src/game/number_enemy.c	\
		src/game/manage_enemy/manage_enemy.c	\
		src/game/manage_enemy/move_enemy.c	\
		src/game/manage_tower/manage_tower.c	\
		src/move/move_rect.c	\
		src/menu/manage_menu.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

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
