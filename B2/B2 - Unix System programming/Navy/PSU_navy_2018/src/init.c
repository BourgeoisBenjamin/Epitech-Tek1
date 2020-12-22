/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** init function
*/

#include "navy.h"

t_game *init_game(char **argv)
{
    t_game *info = malloc(sizeof(t_game));
    if (info == NULL)
        return NULL;
    info->player = malloc(sizeof(t_player));
    info->enemy = malloc(sizeof(t_player));
    if (info->player == NULL || info->enemy == NULL)
        return NULL;
    info->player->pid = getpid();
    info->win = 84;
    info->player->hit = 0;
    info->enemy->hit = 0;
    if (argv[1] && argv[2])
        info->enemy->pid = my_getnbr(argv[1]);
    return info;
}
