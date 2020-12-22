/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_objs_htp_menu.c
*/

#include "defender.h"

t_game_object *init_objs_htp_menu(void)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *list_obj = NULL;
    t_game_object *back = create_object("rsc/menu_back.png", pos, rect, 1920);
    back->type = BACKGROUND;
    list_obj = add_object(list_obj, back);
    return list_obj;
}
