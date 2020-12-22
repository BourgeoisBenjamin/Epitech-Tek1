/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_button
*/

#include "rpg.h"

void delete_inside_button(t_button *to_delete)
{
    if (to_delete->shape)
        sfRectangleShape_destroy(to_delete->shape);
    if (to_delete->texture)
        sfTexture_destroy(to_delete->texture);
    if (to_delete->click_effect)
        sfMusic_destroy(to_delete->click_effect);
    free(to_delete);
}

t_button *delete_button(t_button *list_button, t_button *to_delete)
{
    t_button *button = list_button;

    if (button == to_delete) {
        button = button->next;
        delete_inside_button(to_delete);
        return (button);
    }

    while (button->next != to_delete && button->next != NULL) {
        button = button->next;
    }

    if (button->next == NULL && button != to_delete)
        return (list_button);

    button->next = button->next->next;
    delete_inside_button(to_delete);
    return (list_button);
}
