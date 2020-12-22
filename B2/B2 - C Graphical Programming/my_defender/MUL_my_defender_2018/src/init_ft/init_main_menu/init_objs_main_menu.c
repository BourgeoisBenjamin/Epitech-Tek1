/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_objs_main_menu
*/

#include "defender.h"

t_game_object *init_objs_main_menu(void)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *list_obj = NULL;
    t_game_object *back = create_object("rsc/menu_back.png", pos, rect, 1920);
    back->type = BACKGROUND;
    list_obj = add_object(list_obj, back);
    pos.y = 470;
    rect.width = 90;
    rect.height = 110;
    t_game_object *plane = create_object("rsc/enemy.png", pos, rect, 360);
    plane->type = ENEMY;
    pos.y = 720;
    t_game_object *plane2 = create_object("rsc/enemy.png", pos, rect, 360);
    plane2->type = ENEMY;
    list_obj = add_object(list_obj, plane);
    list_obj = add_object(list_obj, plane2);
    return list_obj;
}
