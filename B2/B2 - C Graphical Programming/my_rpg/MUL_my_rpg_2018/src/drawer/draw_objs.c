/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** draw_objs
*/

#include "rpg.h"

void draw_objs(sfRenderWindow *window, t_scenes *scene)
{
    for (enum object type = 0; type < UNKNOWN_O; type++) {
        for (t_game_object *temp = scene->objs; temp;
        temp = temp->next) {
            if (temp->type == type) {
                sfRenderWindow_drawSprite(window, temp->sprite, NULL);
            }
        }
    }
}
