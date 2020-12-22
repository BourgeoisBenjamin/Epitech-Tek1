/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** create_map
*/

#include "rpg.h"

t_game_object *create_map(char *filepath)
{
    t_game_object *map = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};

    map = create_object(filepath, pos, rect, 3840);
    map->type = BACKGROUND_O;
    return map;
}
