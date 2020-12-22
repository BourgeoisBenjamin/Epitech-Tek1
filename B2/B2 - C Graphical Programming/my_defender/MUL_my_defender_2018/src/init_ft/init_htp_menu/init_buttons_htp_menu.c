/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_buttons_htp_menu.c
*/

#include "defender.h"

t_button *init_buttons_htp_menu(void)
{
    sfVector2f pos2 = {650, 800};
    sfVector2f size = {600, 200};
    t_button *list_button = NULL;
    t_button *play = create_button(pos2, size, "rsc/play.png", &start_menu);
    list_button = add_button(list_button, play);
    return list_button;
}
