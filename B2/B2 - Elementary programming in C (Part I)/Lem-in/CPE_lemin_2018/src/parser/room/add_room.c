/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** add_room
*/

#include <lemin.h>

int add_room(t_graph *graph, char *buffer)
{
    char **info_tab = NULL;
    if ((info_tab = check_valid_room(buffer)) == NULL) {
        free_array(info_tab);
        return (-1);
    }
    if (is_exist_room(info_tab[0], graph->index)
    || is_same_co(info_tab[1], info_tab[2], graph->index)) {
        free_array(info_tab);
        return (-1);
    }
    t_room *new_room = create_room(info_tab);
    if (new_room == NULL) {
        free_array(info_tab);
        return (-1);
    }
    free_array(info_tab);
    if ((graph->index = add_room_in_index(graph->index, new_room)) == NULL)
        return (-1);
    return (0);
}
