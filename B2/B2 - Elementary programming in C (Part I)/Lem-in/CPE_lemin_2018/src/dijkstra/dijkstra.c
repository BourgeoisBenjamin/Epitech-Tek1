/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** dijkstra
*/

#include <lemin.h>

t_room *get_minimal_weight(t_room **index)
{
    t_room *min = index[0];
    for (int i = 0; index[i]; i++) {
        if (index[i]->is_visited == false && index[i]->weight == 0) {
            min = index[i];
        }
    }
    return (min);
}

void child_condition(t_room *min_room)
{
    min_room->is_visited = true;
    for (int i = 0; min_room->next[i]; i++) {
        if ((min_room->next[i]->is_visited == false
        && (min_room->weight < min_room->next[i]->weight))
        || (min_room->next[i]->weight == -1)) {
            min_room->next[i]->weight = min_room->weight;
            min_room->next[i]->antecedent = min_room;
        }
    }
}

t_room **save_path(t_graph *graph)
{
    t_room **path_tab = malloc(sizeof(t_room*));
    if (path_tab == NULL)
        return (NULL);
    path_tab[0] = NULL;
    for (t_room *tmp = graph->end; tmp; tmp = tmp->antecedent) {
        path_tab = add_room_in_index(path_tab, tmp);
        if (path_tab == NULL)
            return (NULL);
    }
    return (path_tab);
}

t_room **dijkstra(t_graph *graph)
{
    t_room **path_tab = NULL;
    int i = 0;
    t_room *min = NULL;
    while (graph->end->weight != 0 && i != 1000) {
        min = get_minimal_weight(graph->index);
        child_condition(min);
        i++;
    }
    if (i == 1000)
        return (NULL);
    if ((path_tab = save_path(graph)) == NULL)
        return (NULL);
    return (path_tab);
}
