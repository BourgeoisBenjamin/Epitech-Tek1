/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** display_move
*/

#include <lemin.h>

void check_move_this_step(t_room **path_tab, int *is_write, int *old_ant_n)
{
    int ant_n = 1;
    for (int i = 0; path_tab[i + 1]; i++) {
        if (path_tab[i + 1]->ant > 0) {
            if (*is_write)
                my_printf(" ");
            my_printf("P%i-%s", (ant_n + *old_ant_n), path_tab[i]->name);
            path_tab[i]->ant++;
            path_tab[i + 1]->ant--;
            ant_n += 1;
            *is_write = 1;
        }
    }
}

void display_move(t_graph *graph, t_room **path_tab)
{
    my_printf("%s\n", MOVES);
    int old_ant_n = 0;
    int is_write = 0;
    while (graph->end->ant != graph->nb_ants) {
        check_move_this_step(path_tab, &is_write, &old_ant_n);
        old_ant_n = graph->end->ant;
        if (is_write)
            my_printf("\n");
        is_write = 0;
    }
}
