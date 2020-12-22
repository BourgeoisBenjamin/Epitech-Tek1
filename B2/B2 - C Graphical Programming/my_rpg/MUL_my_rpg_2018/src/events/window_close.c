/*
** EPITECH PROJECT, 2018
** MY_RPG
** File description:
** window close
*/

#include "rpg.h"

int window_close(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed
        || (sfKeyboard_isKeyPressed(sfKeyEscape) == true
        && sfKeyboard_isKeyPressed(sfKeyLControl) == true))
        sfRenderWindow_close(window);
    return (0);
}
