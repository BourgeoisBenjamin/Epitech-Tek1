/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** create_game2_scene
*/

#include "rpg.h"

t_scenes **create_game2_scene(t_rpg *game)
{
    t_game_object *list_obj = init_objs_game2_scene();
    t_npc *list_npc = init_npc_game2_scene();
    t_music *music = create_music("ressources/soundtrack/nm.ogg",
    50, 1, BACKGROUND_O);
    if (list_obj == NULL || music == NULL)
        return (NULL);

    t_scenes *new_scene = create_scene(list_obj, NULL, NULL, music);
    if (new_scene == NULL)
        return (NULL);
    new_scene->quest = init_quest("./ressources/quest/game2_quest.txt");
    new_scene->npc = list_npc;
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (game->scenes_array);
}
