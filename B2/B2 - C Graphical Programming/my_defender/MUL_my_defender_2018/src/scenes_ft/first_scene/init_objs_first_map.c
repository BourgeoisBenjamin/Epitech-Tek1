/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_objs_first_map
*/

#include "defender.h"

void create_menu_back(t_game_object *list_obj)
{
    sfIntRect rect = {0, 0, 1920, 271};
    sfVector2f pos = {0, 810};
    t_game_object *temp = create_object("rsc/back_menu.png", pos, rect, 1920);
    temp->type = MENU1;
    list_obj = add_object(list_obj, temp);
}

void create_shop(t_game_object *list_obj)
{
    sfVector2f pos = {20, 870};
    sfIntRect rect = {0, 0, 634, 157};
    t_game_object *temp = create_object("rsc/back_shop.png", pos, rect, 689);
    temp->type = MENU2;
    list_obj = add_object(list_obj, temp);
}

void create_money_back(t_game_object *list_obj)
{
    sfVector2f pos = {700, 890};
    sfIntRect rect = {0, 0, 398, 118};
    t_game_object *temp = create_object("rsc/money.png", pos, rect, 398);
    temp->type = MENU2;
    list_obj = add_object(list_obj, temp);
}

void create_health_back(t_game_object *list_obj)
{
    sfVector2f pos = {1140, 870};
    sfIntRect rect = {0, 0, 148, 149};
    t_game_object *temp = create_object("rsc/health.png", pos, rect, 148);
    temp->type = MENU2;
    list_obj = add_object(list_obj, temp);
}

t_game_object *init_objs_first_map(void)
{
    t_game_object *list_obj = create_map_first_scene();
    if (list_obj == NULL)
        return (NULL);
    create_enemies(list_obj);
    create_menu_back(list_obj);
    create_shop(list_obj);
    create_money_back(list_obj);
    create_health_back(list_obj);
    return list_obj;
}
