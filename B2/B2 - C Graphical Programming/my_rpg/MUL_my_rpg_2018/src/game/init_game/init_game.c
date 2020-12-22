/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_game
*/

#include "rpg.h"

int init_game(t_rpg* game)
{
    if ((game->scenes_array = init_scenes_array()) == NULL)
        return (-1);
    if ((game->settings = init_settings()) == NULL)
        return (-1);
    if ((game->scenes_array = create_all_scenes(game))
        == NULL)
        return (-1);
    return (0);
}
