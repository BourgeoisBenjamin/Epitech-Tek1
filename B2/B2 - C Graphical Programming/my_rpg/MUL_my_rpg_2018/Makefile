##
## EPITECH PROJECT, 2018
## MY_RPG
## File description:
## A simple Makefile to compile
##

NAME	=	my_rpg

SRC	=	src/main.c	\
		src/buttons/button_is_clicked.c	\
		src/buttons/create_button_position.c	\
		src/buttons/create_buttons.c	\
		src/buttons/onclick.c	\
		src/buttons/onhover.c	\
		src/buttons/onnormal.c	\
		src/callback_object/open_chest.c	\
		src/callback_object/go_to_next_scene.c	\
		src/callback_object/fight_in_house.c	\
		src/delete/delete_all.c	\
		src/delete/delete_button.c	\
		src/delete/delete_list_buttons.c	\
		src/delete/delete_list_musics.c	\
		src/delete/delete_list_objs.c	\
		src/delete/delete_list_npc.c	\
		src/delete/delete_list_texts.c	\
		src/delete/delete_music.c	\
		src/delete/delete_obj.c	\
		src/delete/delete_particle_system.c	\
		src/delete/delete_particle.c	\
		src/delete/delete_player.c	\
		src/delete/delete_scenes_array.c	\
		src/delete/delete_text.c	\
		src/drawer/draw_buttons.c	\
		src/drawer/draw_npc.c	\
		src/drawer/draw_objs.c	\
		src/drawer/draw_particle_system.c	\
		src/drawer/draw_player.c	\
		src/drawer/draw_quest.c	\
		src/drawer/draw_scene.c	\
		src/drawer/draw_text.c	\
		src/drawer/play_music.c	\
		src/events/move_player/is_obj.c	\
		src/events/move_player/limit_map.c	\
		src/events/move_player/move_bot.c	\
		src/events/move_player/move_left.c	\
		src/events/move_player/move_player.c	\
		src/events/move_player/move_right.c	\
		src/events/move_player/move_top.c	\
		src/events/back.c	\
		src/events/attack.c	\
		src/events/check_action.c	\
		src/events/check_action_obj.c	\
		src/events/close_inventory.c	\
		src/events/create_girl.c	\
		src/events/create_men.c	\
		src/events/defense.c	\
		src/events/delete_obj1_inv.c	\
		src/events/delete_obj2_inv.c	\
		src/events/continue_game.c	\
		src/events/event_button.c	\
		src/events/event_keyboard.c	\
		src/events/event.c	\
		src/events/go_conv_scene.c	\
		src/events/go_end.c	\
		src/events/go_fight_scene.c	\
		src/events/go_inventory.c	\
		src/events/go_update_attrib.c	\
		src/events/menu_htp.c	\
		src/events/menu_pause.c	\
		src/events/menu_settings.c	\
		src/events/quit_game.c	\
		src/events/restart_clock.c	\
		src/events/restart_game.c	\
		src/events/skill1_attrib.c	\
		src/events/skill2_attrib.c	\
		src/events/skill3_attrib.c	\
		src/events/skill4_attrib.c	\
		src/events/special.c	\
		src/events/start_game1.c	\
		src/events/play_attrib.c	\
		src/events/play_start.c	\
		src/events/quit_conv_scene.c	\
		src/events/quit_fight_scene.c	\
		src/events/stop_all_music.c	\
		src/events/volume_effect.c	\
		src/events/volume_music.c	\
		src/events/window_close.c	\
		src/events/start_game2.c	\
		src/game/init_game/init_game.c	\
		src/game/init_game/init_settings.c	\
		src/game/manage/manage_conv.c	\
		src/game/manage/manage_intro.c	\
		src/game/manage/manage_npc.c	\
		src/game/game_main.c	\
		src/init/init_renderwindow.c	\
		src/init/init.c	\
		src/init/init_rpg.c	\
		src/list/add_tolist.c	\
		src/loading_screen/loading_screen.c	\
		src/maps/collect_info_file_obj.c	\
		src/maps/create_map.c	\
		src/maps/create_obj_letter_at_letter.c	\
		src/maps/create_obj_map.c	\
		src/maps/create_sprite_obj_map.c	\
		src/maps/delete_map_obj_info.c	\
		src/move/move_rect.c	\
		src/music/create_music.c	\
		src/npc/add_text_to_npc.c	\
		src/npc/create_npc.c	\
		src/npc/move_npc.c	\
		src/npc/npc_to_obj.c	\
		src/object/create_object.c	\
		src/object/duplicate_obj.c	\
		src/object/find_obj_to_delete.c	\
		src/particle/add_particle_system.c	\
		src/particle/add_particle.c	\
		src/particle/create_particle_system.c	\
		src/particle/create_particle.c	\
		src/particle/manage_particle_system.c	\
		src/particle/remove_particle.c	\
		src/particle/update_particle.c	\
		src/player/create_player.c	\
		src/player/init_attrib.c	\
		src/player/player_to_obj.c	\
		src/player/update_damage_player.c	\
		src/player/update_life_player.c	\
		src/quest/init_quest.c	\
		src/quest/add_quest_in_list.c	\
		src/quest/quest_management_scene1.c	\
		src/quest/quest_management_scene2.c	\
		src/scenes/attrib_scene/create_attrib_scene.c	\
		src/scenes/attrib_scene/init_bskills_attrib_scene.c	\
		src/scenes/attrib_scene/init_buttons_attrib_scene.c	\
		src/scenes/attrib_scene/init_musics_attrib_scene.c	\
		src/scenes/attrib_scene/init_objs_attrib_scene.c	\
		src/scenes/attrib_scene/init_oskills_attrib_scene.c	\
		src/scenes/attrib_scene/init_texts_attrib_scene.c	\
		src/scenes/attrib_scene/init_tskills_attrib_scene.c	\
		src/scenes/attrib_scene/init_tskills2_attrib_scene.c	\
		src/scenes/attrib_scene/updated_text_attrib_scene.c	\
		src/scenes/conv_scene/create_conv_scene.c	\
		src/scenes/conv_scene/create_pers_conv_scene.c	\
		src/scenes/conv_scene/delete_tmp_conv_scene.c	\
		src/scenes/conv_scene/init_objs_conv_scene.c	\
		src/scenes/conv_scene/init_texts_conv_scene.c	\
		src/scenes/end_scene/create_end_scene.c	\
		src/scenes/end_scene/init_buttons_end_scene.c	\
		src/scenes/end_scene/init_musics_end_scene.c	\
		src/scenes/end_scene/init_objs_end_scene.c	\
		src/scenes/end_scene/init_texts_end_scene.c	\
		src/scenes/fight_scene/add_tmp_fight_scene.c	\
		src/scenes/fight_scene/create_fight_scene.c	\
		src/scenes/fight_scene/delete_tmp_fight_scene.c	\
		src/scenes/fight_scene/init_buttons_fight_scene.c	\
		src/scenes/fight_scene/init_musics_fight_scene.c	\
		src/scenes/fight_scene/init_objs_fight_scene.c	\
		src/scenes/fight_scene/init_texts_fight_scene.c	\
		src/scenes/game1/create_game1_scene.c	\
		src/scenes/game1/init_objs_game1_scene.c	\
		src/scenes/game1/init_npc_game1_scene.c	\
		src/scenes/game1/create_sensei.c	\
		src/scenes/game2/create_game2_scene.c	\
		src/scenes/game2/init_objs_game2_scene.c	\
		src/scenes/game2/init_npc_game2_scene.c	\
		src/scenes/htp_scene/create_htp_scene.c	\
		src/scenes/htp_scene/init_buttons_htp_scene.c	\
		src/scenes/htp_scene/init_objs_htp_scene.c	\
		src/scenes/htp_scene/init_texts_htp_scene.c	\
		src/scenes/htp_scene/init_musics_htp_scene.c	\
		src/scenes/intro_scene/create_intro_scene.c	\
		src/scenes/intro_scene/init_objs_intro_scene.c	\
		src/scenes/intro_scene/init_musics_intro_scene.c	\
		src/scenes/intro_scene/init_particle_system_intro_scene.c	\
		src/scenes/intro_scene/init_texts_intro_scene.c	\
		src/scenes/inventory_scene/add_tmp_inventory_scene.c	\
		src/scenes/inventory_scene/create_inventory_scene.c	\
		src/scenes/inventory_scene/delete_tmp_inventory_scene.c	\
		src/scenes/inventory_scene/init_buttons_inventory_scene.c	\
		src/scenes/inventory_scene/init_objs_inventory_scene.c	\
		src/scenes/inventory_scene/init_objs_inventory_scene2.c	\
		src/scenes/inventory_scene/init_player_inv_scene.c	\
		src/scenes/inventory_scene/init_texts_inventory_scene.c	\
		src/scenes/inventory_scene/init_tskills_inventory_scene.c	\
		src/scenes/inventory_scene/init_tskills_inventory_scene2.c	\
		src/scenes/pause_scene/create_pause_scene.c	\
		src/scenes/pause_scene/init_buttons_pause_scene.c	\
		src/scenes/pause_scene/init_objs_pause_scene.c	\
		src/scenes/pause_scene/init_texts_pause_scene.c	\
		src/scenes/pause_scene/init_musics_pause_scene.c	\
		src/scenes/player_scene/create_player_scene.c	\
		src/scenes/player_scene/init_objs_player_scene.c	\
		src/scenes/player_scene/init_texts_player_scene.c	\
		src/scenes/player_scene/init_buttons_player_scene.c	\
		src/scenes/player_scene/init_musics_player_scene.c	\
		src/scenes/settings_scene/create_settings_scene.c	\
		src/scenes/settings_scene/init_buttons_settings_scene.c	\
		src/scenes/settings_scene/init_objs_settings_scene.c	\
		src/scenes/settings_scene/init_texts_settings_scene.c	\
		src/scenes/settings_scene/init_musics_settings_scene.c	\
		src/scenes/start_scene/create_start_scene.c	\
		src/scenes/start_scene/init_buttons_start_scene.c	\
		src/scenes/start_scene/init_musics_start_scene.c	\
		src/scenes/start_scene/init_objs_start_scene.c	\
		src/scenes/update_attrib_scene/create_update_attrib_scene.c	\
		src/scenes/update_attrib_scene/init_buttons_update_attrib_scene.c	\
		src/scenes/update_attrib_scene/init_objs_update_attrib_scene.c	\
		src/scenes/update_attrib_scene/init_texts_update_attrib_scene.c	\
		src/scenes/add_scene.c	\
		src/scenes/create_all_scenes.c	\
		src/scenes/create_scene.c	\
		src/scenes/init_scenes_array.c	\
		src/text/create_text.c	\
		src/text/list_text_transparence.c	\
		src/utils/add_transparency.c	\
		src/utils/delete_transparency.c	\
		src/utils/get_elapsed_time.c	\
		src/rpg.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

debug:	$(OBJ)
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
