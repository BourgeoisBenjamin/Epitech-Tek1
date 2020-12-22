/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_buttons_first_map
*/

#include "defender.h"

void create_tower_button(t_button *list_button)
{
    sfVector2f pos = {50, 875};
    sfVector2f size = {100, 100};
    t_button *tower1 = create_button(pos, size, "rsc/Tower1.png", &buy_tower1);
    pos.x = 205;
    t_button *tower2 = create_button(pos, size, "rsc/Tower2.png", &buy_tower2);
    pos.x = 370;
    t_button *tower3 = create_button(pos, size, "rsc/Tower3.png", &buy_tower3);
    pos.x = 530;
    t_button *tower4 = create_button(pos, size, "rsc/Tower4.png", &buy_tower4);
    list_button = add_button(list_button, tower1);
    list_button = add_button(list_button, tower2);
    list_button = add_button(list_button, tower3);
    list_button = add_button(list_button, tower4);
}

t_button *create_start_button(void)
{
    sfVector2f pos = {1550, 900};
    sfVector2f size = {300, 100};
    t_button *list_button = NULL;
    t_button *play = create_button(pos, size, "rsc/play.png", &start_game);
    list_button = add_button(list_button, play);
    return list_button;
}

t_button *init_buttons_first_map(void)
{
    t_button *list_button = create_start_button();
    create_tower_button(list_button);
    return list_button;
}
