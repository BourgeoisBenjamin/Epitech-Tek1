/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** draw_text
*/

#include "rpg.h"

void draw_text(sfRenderWindow *window, t_scenes *scene)
{
    for (enum text type = 0; type < UNKNOWN_T; type++) {
        for (t_text *temp = scene->texts; temp;
        temp = temp->next) {
            if (temp->type == type) {
                sfRenderWindow_drawText(window, temp->text, NULL);
            }
        }
    }
}
