/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** game_main
*/

#include <runner.h>

void game_main(t_game *game, t_instance *instance)
{
    if (instance->started && !instance->pause && !instance->menu
        && !instance->dead && !instance->win) {
        parallax(game->parallax);
        move_entities(game->entities, instance);
        player(game, instance);
        enemy(game, instance);
        score(game, instance);
        is_lose(game, instance);
        is_win(game, instance);
        draw_all_sprite(game, instance);
    } else if (!instance->started && instance->menu && !instance->dead
        && !instance->win) {
        menu(game);
    } else {
        game_main2(game, instance);
    }
}

void game_main2(t_game *game, t_instance *instance)
{
    if (instance->started && instance->pause && !instance->dead
        && !instance->win) {
        pause_game(game, instance);
    } else if (instance->win) {
        win_game(game, instance);
    } else {
        end_game(game, instance);
    }
}