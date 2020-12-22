/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** event_main
*/

#include <runner.h>

void event(t_game *game, t_instance *instance, char **argv)
{
    windows_close(game, instance);
    start(game, instance);
    is_pause(game, instance);
    is_jump(game, instance);
    is_restart(game, instance, argv);
}

void windows_close(t_game *game, t_instance *instance)
{
    if (game->event.type == sfEvtMouseButtonReleased
        && instance->started == 0) {
        sfVector2i temp = sfMouse_getPositionRenderWindow(game->window);
        if (WIDTH / 2 - 433 / 2 < temp.x && temp.x < WIDTH / 2 + 433 / 2
            && HEIGHT / 2 + 240 < temp.y && temp.y < HEIGHT / 2 + 365) {
            sfRenderWindow_close(game->window);
        }
    }
    if (game->event.type == sfEvtClosed || game->event.key.code == sfKeyQ)
        sfRenderWindow_close(game->window);
}

void start(t_game *game, t_instance *instance)
{
    if (game->event.type == sfEvtMouseButtonReleased
        && instance->started == 0) {
        sfVector2i temp = sfMouse_getPositionRenderWindow(game->window);
        if (WIDTH / 2 - 433 / 2 < temp.x && temp.x < WIDTH / 2 + 433 / 2
            && HEIGHT / 2 - 544 / 3 < temp.y && temp.y < HEIGHT / 3 + 130) {
            instance->started = 1;
            instance->menu = 0;
        }
    }
}