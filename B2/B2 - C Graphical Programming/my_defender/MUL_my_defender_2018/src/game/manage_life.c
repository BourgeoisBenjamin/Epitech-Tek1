/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_life
*/

#include "defender.h"

void is_on_castle(sfVector2f pos_castle, sfVector2f pos_enemy,
int *life, int damage)
{
    if (pos_castle.x - 100 < pos_enemy.x && pos_enemy.x < pos_castle.x + 100)
        if (pos_castle.y - 100 < pos_enemy.y
            && pos_enemy.y < pos_castle.y + 100)
            *life -= damage;
}

void manage_life(t_game_object *obj, t_game_object *enemy,
t_instance *instance, t_text *texts)
{
    sfVector2f pos_castle = {0, 0};
    sfVector2f pos_enemy = {0, 0};
    for (t_game_object *temp = obj; temp; temp = temp->next) {
        if (temp->type == CASTLE) {
            pos_castle = sfSprite_getPosition(temp->sprite);
            break;
        }
    }
    pos_enemy = sfSprite_getPosition(enemy->sprite);
    is_on_castle(pos_castle, pos_enemy, &instance->life, enemy->damage);
    sfText_setString(texts->next->text, my_itoa(instance->life));
}
