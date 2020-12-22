/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** limit_map
*/

#include "rpg.h"

bool limit_map_right(t_rpg *game, int max)
{
    t_game_object *tmp = game->scenes_array[game->scene]->objs;

    while (tmp != NULL) {
        if (tmp->type == BACKGROUND_O && tmp->rect.left >= max)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}

bool limit_map_left(t_rpg *game, int max)
{
    t_game_object *tmp = game->scenes_array[game->scene]->objs;

    while (tmp != NULL) {
        if (tmp->type == BACKGROUND_O && tmp->rect.left <= max)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}

bool limit_map_top(t_rpg *game, int max)
{
    t_game_object *tmp = game->scenes_array[game->scene]->objs;

    while (tmp != NULL) {
        if (tmp->type == BACKGROUND_O && tmp->rect.top <= max)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}

bool limit_map_bot(t_rpg *game, int max)
{
    t_game_object *tmp = game->scenes_array[game->scene]->objs;

    while (tmp != NULL) {
        if (tmp->type == BACKGROUND_O && tmp->rect.top >= max)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}
