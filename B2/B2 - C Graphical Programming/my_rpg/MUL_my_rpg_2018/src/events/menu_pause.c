/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** menu_pause
*/

#include "rpg.h"

int menu_pause(t_rpg *game)
{
    if (game->scene == PAUSE)
        return (continue_game(game));
    if (!(GAME1 <= game->scene && game->scene <= GAME2))
        return (0);
    stop_all_music(game);
    restart_clock(game->scenes_array[PAUSE]->clock);
    game->old_scene = game->scene;
    game->scene = PAUSE;
    return (0);
}
