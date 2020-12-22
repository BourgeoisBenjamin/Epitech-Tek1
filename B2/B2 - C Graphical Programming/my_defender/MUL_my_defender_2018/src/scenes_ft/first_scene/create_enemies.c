/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** create enemies
*/

#include "defender.h"

t_game_object *get_first_road(t_game_object *list_obj)
{
    t_game_object *first_road = NULL;
    int j = 0;
    for (t_game_object *temp = list_obj; temp && j < 12; temp = temp->next) {
        if (temp->type == ROAD) {
            first_road = temp;
            j++;
        }
    }
    return (first_road);
}

void create_enemies(t_game_object *list_obj)
{
    t_game_object *first_road = get_first_road(list_obj);
    sfIntRect rect = {0, 0, 90, 110};
    sfVector2f pos = sfSprite_getPosition(first_road->sprite);
    sfVector2f origin = {rect.width / 2, rect.height / 2};
    pos.x -= 100;
    pos.y += 135/2;
    for (int i = 0; i < 10; i++) {
        t_game_object *temp = create_object("rsc/enemy.png", pos, rect, 360);
        temp->type = ENEMY;
        temp->life = 10000;
        temp->damage = 1;
        sfSprite_setOrigin(temp->sprite, origin);
        add_object(list_obj, temp);
        pos.x -= 350;
    }
}
