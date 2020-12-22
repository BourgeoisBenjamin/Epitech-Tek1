/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** players_turn
*/

#include <matchstick.h>

int get_infos(t_info *game)
{
    char *line = NULL;
    char *matches = NULL;
    int value = 0;

    while (value == 0) {
        line = get_line(game);
        if (line == NULL)
            return -1;
        matches = get_matches();
        if (matches == NULL) {
            free(line);
            return -1;
        } else if (!check_matches(game, matches))
            value = 1;
        free(matches);
        free(line);
    }
    return value;
}

int players_turn(t_info *game)
{
    if (get_infos(game) == -1) {
        return -1;
    }
    remove_matches(game);
    my_printf("Player removed %i match(es) from line %i\n",
            game->matches, game->line);
    return 0;
}