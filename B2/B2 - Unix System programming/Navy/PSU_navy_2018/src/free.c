/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Free function file
*/

#include "navy.h"

void free_all(t_game *info)
{
    if (info->player) {
        free_array(info->player->map);
        free(info->player);
    }
    if (info->enemy) {
        free_array(info->enemy->map);
        free(info->enemy);
    }
    if (info)
        free(info);
}
