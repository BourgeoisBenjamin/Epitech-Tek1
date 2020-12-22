/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** rpg
*/

#include "rpg.h"

t_rpg *init(void)
{
    t_rpg *game = init_rpg();
    if (game == NULL)
        return (NULL);
    srand(time(NULL));
    if (init_renderwindow(game) == -1)
        return (NULL);
    if (loading_screen(game->window) == -1)
        return (NULL);
    if (init_game(game) == -1) {
        delete_all(game);
        return (NULL);
    }
    return (game);
}
