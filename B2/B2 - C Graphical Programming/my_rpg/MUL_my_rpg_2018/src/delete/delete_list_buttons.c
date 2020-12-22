/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_list_buttons
*/

#include "rpg.h"

void delete_list_buttons(t_button *list)
{
    t_button *current = list;
    t_button *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        if (current->shape)
            sfRectangleShape_destroy(current->shape);
        if (current->texture)
            sfTexture_destroy(current->texture);
        if (current->click_effect)
            sfMusic_destroy(current->click_effect);
        next = current->next;
        free(current);
        current = next;
    }
}
