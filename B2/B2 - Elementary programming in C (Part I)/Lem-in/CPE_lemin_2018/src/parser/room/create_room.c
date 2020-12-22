/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** create_room
*/

#include <lemin.h>

t_room *create_room(char **info_tab)
{
    t_room *new_room = malloc(sizeof(t_room));

    if (new_room == NULL)
        return (NULL + my_printe("Error: malloc() failed\n"));

    new_room->name = my_strdup(info_tab[0]);
    new_room->x = my_getnbr(info_tab[1]);
    new_room->y = my_getnbr(info_tab[2]);
    new_room->ant = 0;
    new_room->weight = -1;
    new_room->is_visited = false;
    new_room->antecedent = NULL;
    new_room->next = malloc(sizeof(t_room*));
    if (new_room->next == NULL) {
        delete_room(new_room);
        return (NULL + my_printe("Error: malloc() failed\n"));
    }
    new_room->next[0] = NULL;
    my_printf("%s %s %s\n", info_tab[0], info_tab[1], info_tab[2]);
    return (new_room);
}
