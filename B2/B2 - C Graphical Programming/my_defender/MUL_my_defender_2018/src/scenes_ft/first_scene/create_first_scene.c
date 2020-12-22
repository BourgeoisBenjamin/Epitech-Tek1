/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** create first map
*/

#include "defender.h"

int create_first_map(t_game *game)
{
    t_game_object *list_obj = init_objs_first_map();
    if (list_obj == NULL)
        return (-1);
    t_button *list_button = init_buttons_first_map();
    t_text *list_text = init_texts_first_map(game);
    t_music *list_music = init_musics_first_map();

    t_scenes *new_scene = create_scene(list_obj, list_button,
    list_text, list_music);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (0);
}
