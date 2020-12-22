/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** check_line
*/

#include <lemin.h>

int check_comment_line(char *buffer)
{
    if (buffer[0] == '#')
        return (0);
    return (1);
}

int check_line(t_graph *graph, char *buffer)
{
    if (!my_strcmp(buffer, START) && my_strlen(buffer) == my_strlen(START)) {
        if (add_start(graph) == -1)
            return (-1);
        return (0);
    } else if (!my_strcmp(buffer, END) && my_strlen(buffer) == my_strlen(END)) {
        if (add_end(graph) == -1)
            return (-1);
        return (0);
    }
    if (check_room_or_tunnel(graph, buffer) == 0)
        return (0);
    else if (check_comment_line(buffer) == 0)
        return (0);
    return (-1);
}
