/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Check function map
*/

#include "navy.h"

int error_file(char *s)
{
    my_printe("Invalid map position. Type ./navy -h\n");
    free(s);
    return -1;
}

int check_same_letter(char *line)
{
    if (((line[3] + line[0] - 48) != (line[6] + 1))
        && ((line[3]) != (line[6] - 1 + line[0] - 48)))
        return (-1);
    return (0);
}

int check_same_number(char *line)
{
    if (((line[2] + line[0] - 48) != (line[5] + 1))
        && ((line[2]) != (line[5] - 1 + line[0] - 48)))
        return (-1);
    return (0);
}

int check_line_position(char *line)
{
    if (!('A' <= line[2] && line[2] <= 'H')
        || !('A' <= line[5] && line[5] <= 'H')
        || !('1' <= line[3] && line[3] <= '8')
        || !('1' <= line[6] && line[6] <= '8'))
        return (-1);

    if (line[2] == line[5])
        return (check_same_letter(line));
    else if (line[3] == line[6])
        return (check_same_number(line));

    return (-1);
}

int valid_line(char *line)
{
    static char len = '2';
    if (len > '5')
        return -1;
    if (my_strlen(line) != 7)
        return -1;
    if (line[0] != len || line[1] != ':' || line[4] != ':')
        return -1;
    if (check_line_position(line) == -1)
        return -1;
    len++;
    return 0;
}
