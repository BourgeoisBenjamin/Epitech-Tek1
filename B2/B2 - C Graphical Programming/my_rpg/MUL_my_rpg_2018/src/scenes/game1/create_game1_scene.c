/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_game1_scene
*/

#include "rpg.h"

t_scenes **create_game1_scene(t_rpg *game)
{
    t_game_object *list_obj = init_objs_game1_scene();
    t_npc *list_npc = init_npc_game1_scene();
    t_music *music = create_music("ressources/soundtrack/Windless-Slopes_1.ogg",
    50, 1, BACKGROUND_O);
    if (list_obj == NULL || list_npc == NULL || music == NULL)
        return (NULL);

    t_scenes *new_scene = create_scene(list_obj, NULL, NULL, music);
    if (new_scene == NULL)
        return (NULL);
    new_scene->quest = init_quest("./ressources/quest/game1_quest.txt");
    new_scene->npc = list_npc;
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (game->scenes_array);
}
