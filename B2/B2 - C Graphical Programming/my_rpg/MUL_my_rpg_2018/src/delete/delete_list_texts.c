/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_list_texts
*/

#include "rpg.h"

void delete_list_texts(t_text *list)
{
    t_text *current = list;
    t_text *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        if (current->text)
            sfText_destroy(current->text);
        next = current->next;
        free(current);
        current = next;
    }
}
