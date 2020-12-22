/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_restart
*/

#include <runner.h>

void is_restart(t_game *game, t_instance *instance, char **argv)
{
    if (game->event.type == sfEvtKeyPressed
        && game->event.key.code == sfKeyR
        && (instance->dead || instance->win)) {
        delete_list(game->life);
        delete_list(game->entities);
        delete_list(game->player);
        delete_list(game->player_jump);
        free(game->life);
        free(game->entities);
        free(game->player);
        free(game->player_jump);
        game->life = init_list();
        game->entities = init_list();
        game->player = init_list();
        game->player_jump = init_list();
        restart_map(game, instance, argv);
        init_instance(instance);
        init_life(game);
        init_player(game, instance);
    }
}

void restart_map(t_game *game, t_instance *instance, char **argv)
{
    if (!instance->infinity)
        parser(game, argv[1], instance);
    else if (instance->infinity)
        infinity(game, instance);
}