/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_objs_score.c
*/

#include "defender.h"

t_game_object *init_objs_score(void)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    sfVector2f pos2 = {850, 300};
    sfIntRect rect2 = {0, 0, 195, 211};
    t_game_object *list_obj = NULL;
    t_game_object *back = create_object("rsc/menu_back.png", pos, rect, 1920);
    back->type = BACKGROUND;
    t_game_object *medal = create_object("rsc/medal.png", pos2, rect2, 195);
    medal->type = OBJECT;
    list_obj = add_object(list_obj, back);
    list_obj = add_object(list_obj, medal);
    return list_obj;
}
