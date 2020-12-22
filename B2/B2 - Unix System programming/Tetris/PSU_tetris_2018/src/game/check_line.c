/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** check_line
*/

#include "tetris.h"

char *new_line(t_tetris *info)
{
    char *line = malloc(sizeof(char) * (info->settings->col + 2));

    if (line == NULL)
        return (NULL);
    line[0] = '*';
    for (int i = 1; i < info->settings->col + 1; i++)
        line[i] = ' ';
    line[info->settings->col + 1] = '*';
    return (line);
}

int remove_line(t_tetris *info, int pos)
{
    int i = 0;

    free(info->game[pos]);
    free(info->decor[pos]);
    for (i = pos; i > 0; i--) {
        info->game[i] = info->game[i - 1];
        info->decor[i] = info->decor[i - 1];
    }
    info->game[i] = new_line(info);
    info->decor[i] = new_line(info);
    if (info->game[i] == NULL || info->decor[i] == NULL)
        return (-1);
    return (0);
}

bool check_star(char *str, t_tetris *info)
{
    for (int i = 1; i < info->settings->col + 1; i++) {
        if (str[i] != '*')
            return (false);
    }
    return (true);
}

int check_line(t_tetris *info)
{
    for (int i = info->settings->row - 1; i >= 0; i--) {
        if (check_star(info->decor[i], info) == true) {
            if (remove_line(info, i) == -1)
                return (-1);
            info->score += 50;
        }
    }
    display_game(info);
    return (0);
}
