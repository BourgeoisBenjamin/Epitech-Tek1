/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_text
*/

#include "rpg.h"

void delete_inside_text(t_text *to_delete)
{
    if (to_delete->text)
        sfText_destroy(to_delete->text);
    free(to_delete);
}

t_text *delete_text(t_text *list_text, t_text *to_delete)
{
    t_text *text = list_text;

    if (text == to_delete) {
        text = text->next;
        delete_inside_text(to_delete);
        return (text);
    }

    while (text->next != to_delete && text->next != NULL) {
        text = text->next;
    }

    if (text->next == NULL && text != to_delete)
        return (list_text);

    text->next = text->next->next;
    delete_inside_text(to_delete);
    return (list_text);
}
