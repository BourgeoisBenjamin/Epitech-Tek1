/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** manage_game
*/

#include "defender.h"

t_game_object *shoot_tower(t_game_object *list_obj, t_music *list_music,
t_game_object *enemy, t_game_object *tower)
{
    enemy->life -= tower->damage;
    sfMusic_play(list_music->music);
    if (enemy->life <= 0)
        list_obj = delete_obj(list_obj, enemy);
    return list_obj;
}

int is_in_tower(sfVector2f pos_enemy, sfVector2f pos_tower)
{
    if (pos_tower.x - 203 < pos_enemy.x && pos_enemy.x < pos_tower.x + 203
        && pos_tower.y - 203 < pos_enemy.y && pos_enemy.y < pos_tower.y + 203)
        return 1;
    return 0;
}

t_game_object *manage_shoot_tower(t_game_object *list_obj, t_music *list_music,
t_game_object *tower)
{
    sfVector2f pos_tower = sfSprite_getPosition(tower->sprite);
    for (t_game_object *temp = list_obj; temp; temp = temp->next) {
        if (temp->type == ENEMY) {
            if (is_in_tower(sfSprite_getPosition(temp->sprite), pos_tower)) {
                list_obj = shoot_tower(list_obj, list_music, temp, tower);
                return list_obj;
            }
        }
    }
    return list_obj;
}

void manage_game(t_scenes *scene, t_instance *instance)
{
    float seconds;
    sfTime time = sfClock_getElapsedTime(scene->clock);
    seconds = time.microseconds / 100000.0;
    if (seconds < 1)
        return;
    for (t_game_object *tp = scene->objs; tp; tp = tp->next) {
        if (tp->type == ENEMY)
            manage_life(scene->objs, tp, instance, scene->texts);
        if (tp->type == TOWER)
            scene->objs = manage_shoot_tower(scene->objs, scene->musics, tp);
    }
    sfClock_restart(scene->clock);
}
