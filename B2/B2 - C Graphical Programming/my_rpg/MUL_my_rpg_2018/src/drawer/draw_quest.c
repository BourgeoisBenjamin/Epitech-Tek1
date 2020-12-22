/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** draw_quest
*/

#include "rpg.h"

void draw_quest(sfRenderWindow *window, t_scenes *scene,
enum scenes current_scenes)
{
    t_quest *tmp;

    if (current_scenes >= GAME1 && current_scenes <= GAME2) {
        tmp = scene->quest;
        while (tmp->next != NULL && tmp->finish == true)
            tmp = tmp->next;
        if (tmp != NULL)
            sfRenderWindow_drawText(window, tmp->text, NULL);
    }
}
