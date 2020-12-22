/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_game1_scene
*/

#include "rpg.h"

t_game_object *init_objs_game1_scene(void)
{
    t_game_object *list_obj = NULL;
    t_game_object *tempo = NULL;

    if ((list_obj = create_map("./ressources/maps/map1.png")) == NULL)
        return (NULL);
    tempo = list_obj;
    while (tempo->next != NULL)
        tempo = tempo->next;
    if ((tempo->next = create_obj_map("./ressources/maps/scene_one_obj.txt"))
        == NULL)
        return (NULL);
    return (list_obj);
}
