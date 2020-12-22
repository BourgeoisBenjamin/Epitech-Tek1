/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_pause_menu
*/

#include "defender.h"

void init_end(t_game *game)
{
    t_game_object *list_obj = init_objs_end();
    t_button *list_button = init_buttons_end();
    t_text *list_text = init_texts_end();

    t_scenes *new_scene = create_scene(list_obj, list_button, list_text, NULL);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
}
