/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_rpg
*/

#include "rpg.h"

t_rpg *init_rpg(void)
{
    t_rpg *game = malloc(sizeof(t_rpg));

    if (game == NULL)
        return (NULL);
    game->window = NULL;
    game->scenes_array = NULL;
    game->player = init_player();
    if (game->player == NULL) {
        delete_all(game);
        return (NULL);
    }
    game->settings = NULL;
    game->scene = START;
    game->actual_game = GAME1;
    return (game);
}
