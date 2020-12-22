/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** event_keyboard
*/

#include "rpg.h"

int event_keyboard(t_rpg *game)
{
    if (game->event.type == sfEvtKeyPressed) {
        move_player(game);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == true)
            return (menu_pause(game));
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == true
            && sfKeyboard_isKeyPressed(sfKeyLControl) == true)
            return (quit_game(game));
        if (sfKeyboard_isKeyPressed(sfKeyI) == true)
            return (go_inventory(game));
        if (sfKeyboard_isKeyPressed(sfKeyP) == true)
            return (go_update_attrib(game));
    }
    return (0);
}
