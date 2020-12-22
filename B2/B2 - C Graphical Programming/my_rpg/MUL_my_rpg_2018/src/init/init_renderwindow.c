/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_renderwindow
*/

#include "rpg.h"

int init_renderwindow(t_rpg *game)
{
    my_printf("[CREATE] WINDOWS\n");
    game->mode.width = WIDTH;
    game->mode.height = HEIGHT;
    game->mode.bitsPerPixel = 32;
    game->window = sfRenderWindow_create(game->mode, "my_rpg",
    sfClose, NULL);

    if (!game->window)
        return (-1);

    sfKeyboard_setVirtualKeyboardVisible(sfFalse);
    sfRenderWindow_setFramerateLimit(game->window, 60);

    return (0);
}
