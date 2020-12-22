/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** create_obj_map.c
*/

#include "rpg.h"

t_game_object *find_and_create_obj_map(t_game_object *obj, t_map_obj *info,
sfVector2f pos)
{
    int tiles;
    t_game_object *tempo = malloc(sizeof(t_game_object));

    if (tempo == NULL)
        return NULL;
    tiles = info->type - 65;
    if ((tempo = create_obj_a_at_m(pos, tiles, tempo)) == NULL)
        return NULL;
    obj = add_object(obj, tempo);
    return obj;
}

t_game_object *create_obj_map(char *filepath)
{
    t_game_object *obj = NULL;
    t_map_obj *info = collect_info_file_obj(filepath);
    t_map_obj *tempo;

    if (info == NULL)
        return NULL;
    tempo = info;
    while (tempo != NULL) {
        if ((obj = find_and_create_obj_map(obj, tempo, tempo->pos)) == NULL) {
            delete_list_objs(obj);
            return NULL;
        }
        tempo = tempo->next;
    }
    delete_map_obj_info(info);
    return obj;
}
