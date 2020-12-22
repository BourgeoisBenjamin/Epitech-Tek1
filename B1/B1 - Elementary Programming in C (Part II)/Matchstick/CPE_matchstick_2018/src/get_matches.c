/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** get_matches
*/

#include <matchstick.h>

int check_matches_in_map(t_info *game)
{
    int j = 0;
    for (int i = 0; game->map[game->line][i]; i++) {
        if (game->map[game->line][i] == '|')
            j++;
    }
    if (j == 0 || game->matches > j) {
        my_printf("Error: not enough matches on this line\n");
        return 1;
    }
    return 0;
}

int check_matches(t_info *game, char *matches)
{
    for (int i = 0; matches[i]; i++) {
        if (!('0' <= matches[i] && matches[i] <= '9') && matches[i] != '+') {
            my_printf("Error: invalid input (positive number expected)\n");
            return 1;
        }
    }
    game->matches = my_getnbr(matches);
    if (game->matches == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return 1;
    } else if (game->matches > game->matches_max) {
        my_printf("Error: you cannot remove more than %i matches per turn\n",
            game->matches_max);
        return 1;
    }
    if (check_matches_in_map(game))
        return 1;
    return 0;
}

char *get_matches(void)
{
    char *matches = NULL;
    my_printf("Matches: ");
    matches = get_next_line(0);

    if (matches == NULL) {
        free(matches);
        return NULL;
    }
    return matches;
}