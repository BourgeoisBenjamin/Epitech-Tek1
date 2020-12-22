/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** ias_turn
*/

#include <matchstick.h>

int is_matches(t_info *game)
{
    for (int i = 0; game->map[game->line][i]; i++)
        if (game->map[game->line][i] == '|')
            return 0;
    return 1;
}

int get_nb_matches(t_info *game)
{
    int j = 0;
    for (int i = 0; game->map[game->line][i]; i++)
        if (game->map[game->line][i] == '|')
            j++;
    return j;
}

void ias_turn(t_info *game)
{
    game->line = random() % game->size + 1;
    while (is_matches(game)) {
        game->line = random() % game->size + 1;
    }
    int matches_l = get_nb_matches(game);
    game->matches = random() % matches_l + 1;
    while (game->matches > game->matches_max) {
        game->matches = random() % matches_l + 1;
    }
    remove_matches(game);
    my_printf("AI removed %i match(es) from line %i\n",
            game->matches, game->line);
}