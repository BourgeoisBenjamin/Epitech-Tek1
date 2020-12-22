/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_buttons_main_menu
*/

#include "defender.h"

t_button *init_buttons_volume(t_button *list_button)
{
    sfVector2f pos_up = {350, 870};
    sfVector2f pos_down = {200, 870};
    sfVector2f size = {100, 100};
    t_button *up = create_button(pos_up, size,
    "rsc/volume_up.png", &volume_up);
    t_button *down = create_button(pos_down, size,
    "rsc/volume_down.png", &volume_down);
    list_button = add_button(list_button, up);
    list_button = add_button(list_button, down);
    return list_button;
}

t_button *init_buttons_main_menu(void)
{
    sfVector2f pos2 = {650, 300};
    sfVector2f size = {600, 200};
    sfVector2f pos3 = {1480, 870};
    sfVector2f size2 = {250, 100};
    t_button *list_button = NULL;
    t_button *play = create_button(pos2, size, "rsc/play.png", &start_menu);
    pos2.y = 550;
    t_button *how_to_play = create_button(pos2, size, "rsc/how_to_play.png",
    &how_to_play_menu);
    pos2.y = 800;
    t_button *quit = create_button(pos2, size, "rsc/quit.png", &quit_game);
    t_button *score = create_button(pos3, size2, "rsc/score.png", &disp_score);
    list_button = add_button(list_button, play);
    list_button = add_button(list_button, how_to_play);
    list_button = add_button(list_button, quit);
    list_button = add_button(list_button, score);
    list_button = init_buttons_volume(list_button);
    return list_button;
}
