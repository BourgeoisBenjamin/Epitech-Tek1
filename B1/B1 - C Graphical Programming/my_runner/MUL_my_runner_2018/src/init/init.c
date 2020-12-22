/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init
*/

#include <runner.h>

void init(t_game *game, t_instance *instance)
{
    my_printf("[LOADING] Windows Game\n");
    game->mode.width = WIDTH;
    game->mode.height = HEIGHT;
    game->mode.bitsPerPixel = 32;
    game->window = sfRenderWindow_create(game->mode, "my_runner",
        sfTitlebar | sfClose, NULL);
    game->menu = init_list();
    game->parallax = init_list();
    game->pause = init_list();
    game->player = init_list();
    game->player_jump = init_list();
    game->life = init_list();
    game->entities = init_list();
    game->win = init_list();
    game->end = init_list();
    init_instance(instance);
    init_sprite(game, instance);
}

void init_instance(t_instance *instance)
{
    instance->started = 0;
    instance->is_jump = 0;
    instance->life = 3;
    instance->pause = 0;
    instance->dead = 0;
    instance->win = 0;
    instance->menu = 1;
    instance->score = 0;
    instance->player = 1;
    instance->is_fall = 0;
}

void init_sprite(t_game *game, t_instance *instance)
{
    init_menu(game);
    init_pause(game);
    init_parallax(game);
    init_win(game);
    init_player(game, instance);
    init_life(game);
    init_end(game);
}