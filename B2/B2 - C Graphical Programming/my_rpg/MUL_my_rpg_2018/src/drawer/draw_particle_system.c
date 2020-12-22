/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** draw_particle_system
*/

#include "rpg.h"

void draw_particle_system(sfRenderWindow *window, t_scenes *scene)
{
    for (int i = 0; scene->system[i]; i++) {
        for (t_particle *temp = scene->system[i]->system; temp;
        temp = temp->next) {
            if (temp->circle)
                sfRenderWindow_drawCircleShape(window, temp->circle, NULL);
            else
                sfRenderWindow_drawRectangleShape(window, temp->rect, NULL);
        }
    }
}
