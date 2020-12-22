/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** delete_node
*/

#include <runner.h>

void delete_node_address(t_list *list, t_game_object *to_delete)
{
    t_game_object *object = list->start;

    while (object->next != NULL && object->next != to_delete)
        object = object->next;

    if (object->next == NULL && object == to_delete) {
        delete_inside_node(to_delete);
        free(to_delete);
        list->len--;
        list->start = NULL;
        return;
    }
    if (object->next == NULL && object != to_delete)
        return;

    object->next = object->next->next;
    delete_inside_node(to_delete);
    free(to_delete);
    list->len--;
    return;
}