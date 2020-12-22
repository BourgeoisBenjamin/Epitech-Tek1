/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_htp_scene
*/

#include "rpg.h"

t_scenes **create_htp_scene(t_rpg *game)
{
    t_game_object *list_obj = init_objs_htp_scene();
    t_button *list_button = init_buttons_htp_scene();
    t_text *list_text = init_texts_htp_scene();
    t_music *list_music = init_musics_htp_scene();

    if (list_button == NULL || list_obj == NULL
        || list_music == NULL || list_text == NULL)
        return (NULL);

    t_scenes *new_scene = create_scene(list_obj, list_button,
    list_text, list_music);
    if (new_scene == NULL)
        return (NULL);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (game->scenes_array);
}
