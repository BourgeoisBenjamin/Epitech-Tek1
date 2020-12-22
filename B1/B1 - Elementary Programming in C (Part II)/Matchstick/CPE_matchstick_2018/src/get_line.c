/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** get_line
*/

#include <matchstick.h>

int check_line(t_info *game, char *line)
{
    if (my_strlen(line) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return 1;
    }
    for (int i = 0; line[i]; i++) {
        if (!('0' <= line[i] && line[i] <= '9') && line[i] != '+') {
            my_printf("Error: invalid input (positive number expected)\n");
            return 1;
        }
    }
    game->line = my_getnbr(line);
    if (game->line < 1 || game->line > game->size) {
        my_printf("Error: this line is out of range\n");
        return 1;
    }
    return 0;
}

char *get_line(t_info *game)
{
    char *line = NULL;
    my_printf("Line: ");
    line = get_next_line(0);

    if (line == NULL) {
        free(line);
        return NULL;
    } else if (check_line(game, line)) {
        free(line);
        return (get_line(game));
    }
    return line;
}