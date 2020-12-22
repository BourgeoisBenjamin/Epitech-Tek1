/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_buttons_pause_menu
*/

#include "defender.h"

t_button *init_buttons_pause_menu(void)
{
    sfVector2f pos2 = {650, 300};
    sfVector2f size = {600, 200};
    t_button *list_button = NULL;
    t_button *res = create_button(pos2, size, "rsc/continue.png", &resume_menu);
    pos2.y = 550;
    t_button *menu = create_button(pos2, size, "rsc/restart.png", &main_menu);
    pos2.y = 800;
    t_button *quit = create_button(pos2, size, "rsc/quit.png", &quit_game);
    list_button = add_button(list_button, res);
    list_button = add_button(list_button, menu);
    list_button = add_button(list_button, quit);
    return list_button;
}
