/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_htp_menu
*/

#include "defender.h"

void init_htp_menu(t_game *game)
{
    t_game_object *list_obj = init_objs_htp_menu();
    t_button *list_button = init_buttons_htp_menu();
    t_text *list_text = init_texts_htp_menu();

    list_text = add_text(list_text, init_texts_htp_menu2());
    t_scenes *new_scene = create_scene(list_obj, list_button, list_text, NULL);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
}
