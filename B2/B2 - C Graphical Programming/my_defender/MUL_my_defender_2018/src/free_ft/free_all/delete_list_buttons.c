/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** delete_list_buttons
*/

#include "defender.h"

void delete_list_buttons(t_button *buttons)
{
    t_button *current = buttons;
    t_button *next;

    while (current != NULL) {
        if (current->texture)
            sfTexture_destroy(current->texture);
        if (current->rect)
            sfRectangleShape_destroy(current->rect);
        next = current->next;
        free(current);
        current = next;
    }
}
