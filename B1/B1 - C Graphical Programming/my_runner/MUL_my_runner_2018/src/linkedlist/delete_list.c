/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** delete_list
*/

#include <runner.h>

void delete_list(t_list *list)
{
    t_game_object *current = list->start;
    t_game_object *next;

    while (current != NULL) {
        delete_inside_node(current);
        next = current->next;
        free(current);
        current = next;
    }
    if (list->clock != NULL)
        sfClock_destroy(list->clock);
}