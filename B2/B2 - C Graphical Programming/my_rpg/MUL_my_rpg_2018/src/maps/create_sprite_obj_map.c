/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** create_sprite_obj
*/

#include "rpg.h"

t_game_object *create_sprite_obj_map(sfIntRect rect, sfVector2f pos,
int max_value, char *filepath)
{
    t_game_object *tempo;

    tempo = create_object(filepath, pos, rect, max_value);
    if (tempo == NULL)
        return NULL;
    tempo->type = OBJ_O;
    return (tempo);
}
