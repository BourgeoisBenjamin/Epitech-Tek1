/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** draw_buttons
*/

#include "rpg.h"

void draw_buttons(sfRenderWindow *window, t_scenes *scene)
{
    for (enum buttons type = 0; type < UNKNOWN_B; type++) {
        for (t_button *temp = scene->buttons; temp;
        temp = temp->next) {
            if (temp->type == type) {
                sfRenderWindow_drawRectangleShape(window, temp->shape, NULL);
            }
        }
    }
}
