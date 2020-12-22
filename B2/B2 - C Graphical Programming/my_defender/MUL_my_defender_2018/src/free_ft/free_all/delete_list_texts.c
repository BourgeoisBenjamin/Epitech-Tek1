/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** delete_list_texts
*/

#include "defender.h"

void delete_list_texts(t_text *texts)
{
    t_text *current = texts;
    t_text *next;

    while (current != NULL) {
        if (current->text)
            sfText_destroy(current->text);
        next = current->next;
        free(current);
        current = next;
    }
}
