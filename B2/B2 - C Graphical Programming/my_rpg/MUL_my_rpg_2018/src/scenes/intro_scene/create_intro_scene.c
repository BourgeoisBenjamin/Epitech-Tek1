/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_intro_scene
*/

#include "rpg.h"

t_scenes **create_intro_scene(t_rpg *game)
{
    t_game_object *list_obj = init_objs_intro_scene();
    t_music *list_music = init_musics_intro_scene();
    t_particle_info *system = init_particle_system_intro_scene();
    t_text *list_text = init_texts_intro_scene();
    t_scenes *new_scene = NULL;

    if (list_obj == NULL || list_music == NULL || system == NULL
        || list_text == NULL)
        return (NULL);
    new_scene = create_scene(list_obj, NULL, list_text, list_music);
    if (new_scene == NULL)
        return (NULL);
    new_scene->system = add_particle_system(new_scene->system, system);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (game->scenes_array);
}
