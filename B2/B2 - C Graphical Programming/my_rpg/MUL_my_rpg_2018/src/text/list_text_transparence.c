/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** list_text_transparence
*/

#include "rpg.h"

void list_text_transparence(t_text *list)
{
    sfColor color;

    for (t_text *tmp = list; tmp; tmp = tmp->next) {
        color = sfText_getColor(tmp->text);
        color.a = 0;
        sfText_setColor(tmp->text, color);
    }
}
