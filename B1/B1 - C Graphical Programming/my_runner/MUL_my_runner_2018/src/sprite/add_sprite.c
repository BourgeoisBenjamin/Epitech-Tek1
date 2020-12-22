/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** add_sprite
*/

#include <runner.h>

void add_sprite(t_list *list, t_game_object *object)
{
    if (list->start == NULL) {
        list->start = object;
        list->len++;
        return;
    }

    t_game_object *temp = list->start;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = object;
    list->len++;
}