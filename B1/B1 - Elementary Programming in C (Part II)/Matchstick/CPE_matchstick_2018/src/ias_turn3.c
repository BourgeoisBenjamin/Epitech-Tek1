/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** ias_turn
*/

#include <matchstick.h>

int get_max_matches(t_info *game)
{
    int sum = 0;
    int max = 0;

    for (int i = 1; i <= game->size; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            if (game->map[i][j] == '|')
                sum++;
        }
        if (sum > max)
            max = sum;
        sum = 0;
    }
    return max;
}

int get_nim_sum(t_info *game)
{
    int sum = 0;
    int nim_sum = 0;

    for (int i = 1; i <= game->size; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            if (game->map[i][j] == '|')
                sum++;
        }
        if (sum == 0)
            continue;
        nim_sum = nim_sum ^ sum;
        sum = 0;
    }
    return nim_sum;
}

int get_right_line(t_info *game)
{
    int sum = 0;
    int line = 0;
    for (int i = 1; i <= game->size; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            if (game->map[i][j] == '|')
                sum++;
        }
        if (sum >= game->matches)
            line = i;
        sum = 0;
    }
    return line;
}

void correct_nim_sum(t_info *game)
{
    int max_matches = get_max_matches(game);
    if (game->matches_max < max_matches) {
        max_matches = game->matches_max;
    }
    while (game->matches > max_matches) {
        game->matches--;
    }
}

void ias_turn(t_info *game)
{
    game->matches = get_nim_sum(game);
    correct_nim_sum(game);

    game->line = get_right_line(game);
    remove_matches(game);
    my_printf("AI removed %i match(es) from line %i\n",
            game->matches, game->line);
}