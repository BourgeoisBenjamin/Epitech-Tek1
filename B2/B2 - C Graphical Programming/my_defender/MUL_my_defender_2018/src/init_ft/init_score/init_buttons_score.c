/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_buttons_score.c
*/

#include "defender.h"

t_button *init_buttons_score(void)
{
    sfVector2f pos2 = {650, 800};
    sfVector2f size = {600, 200};
    sfVector2f pos3 = {1480, 870};
    sfVector2f size2 = {250, 100};
    t_button *list_button = NULL;
    t_button *play = create_button(pos2, size, "rsc/menu.png", &menu_start);
    t_button *score = create_button(pos3, size2, "rsc/reset.png", &reset_score);
    list_button = add_button(list_button, play);
    list_button = add_button(list_button, score);
    return list_button;
}
