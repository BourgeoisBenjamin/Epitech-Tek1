/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** rpg
*/

#include "rpg.h"

int launch_game(t_rpg *game)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (event(game) == -1) {
            delete_all(game);
            return (84);
        }
    }
    if (game_main(game) == -1) {
        delete_all(game);
        return (84);
    }
    draw_scene(game->player, game->window, game->scenes_array, game->scene);
    return (0);
}

int rpg(void)
{
    t_rpg *game = init();

    if (game == NULL)
        return (84);
    while (sfRenderWindow_isOpen(game->window)) {
        if (launch_game(game) == 84)
            return (84);
    }
    delete_all(game);
    return (0);
}
