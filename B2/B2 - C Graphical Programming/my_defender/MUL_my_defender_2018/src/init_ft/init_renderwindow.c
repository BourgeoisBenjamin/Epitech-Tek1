/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_renderwindow
*/

#include "defender.h"

int init_renderwindow(t_game *game)
{
    game->mode.width = WIDTH;
    game->mode.height = HEIGHT;
    game->mode.bitsPerPixel = 32;
    game->window = sfRenderWindow_create(game->mode, "my_defender",
    sfFullscreen, NULL);
    if (!game->window) {
        free_all(game);
        return -1;
    }
    sfKeyboard_setVirtualKeyboardVisible(sfFalse);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    return 0;
}
