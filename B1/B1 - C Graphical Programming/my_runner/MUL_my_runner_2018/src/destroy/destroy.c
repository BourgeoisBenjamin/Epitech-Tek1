/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** destroy
*/

#include <runner.h>

void destroy_game(t_game *game, t_instance *instance)
{
    my_printf("[END OF THE GAME] CLEANING UP\n");
    destroy_window(game);
    destroy_struct(game, instance);
}

void destroy_window(t_game *game)
{
    sfRenderWindow_destroy(game->window);
}

void destroy_struct(t_game *game, t_instance *instance)
{
    delete_list(game->parallax);
    delete_list(game->pause);
    delete_list(game->menu);
    delete_list(game->life);
    delete_list(game->end);
    delete_list(game->entities);
    delete_list(game->player);
    delete_list(game->player_jump);
    delete_list(game->win);
    free(game->parallax);
    free(game->pause);
    free(game->menu);
    free(game->life);
    free(game->end);
    free(game->entities);
    free(game->player);
    free(game->player_jump);
    free(game->win);
    free(game);
    free(instance);
}