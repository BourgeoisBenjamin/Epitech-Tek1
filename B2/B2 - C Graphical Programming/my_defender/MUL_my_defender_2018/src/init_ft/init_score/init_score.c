/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_score
*/

#include "defender.h"

void init_score(t_game *game)
{
    t_game_object *list_obj = init_objs_score();
    t_button *list_button = init_buttons_score();
    t_text *list_text = init_texts_score1();

    list_text = add_text(list_text, init_texts_score2(game->instance));
    t_scenes *new_scene = create_scene(list_obj, list_button, list_text, NULL);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
}
