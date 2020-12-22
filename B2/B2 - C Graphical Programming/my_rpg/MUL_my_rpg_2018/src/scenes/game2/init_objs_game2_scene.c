/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init_objs_game2_scene
*/

#include "rpg.h"

t_game_object *init_objs_game2_scene(void)
{
    t_game_object *list_obj = NULL;
    t_game_object *tempo = NULL;

    if ((list_obj = create_map("./ressources/maps/map2.png")) == NULL)
        return NULL;
    tempo = list_obj;
    while (tempo->next != NULL)
        tempo = tempo->next;
    if ((tempo->next = create_obj_map("./ressources/maps/scene_two_obj.txt"))
        == NULL)
        return (NULL);
    return (list_obj);
}
