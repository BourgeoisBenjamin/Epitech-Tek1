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
    my_printf("max : %i\n", max);
    return max;
}

int get_nim_sum(t_info *game)
{
    int sum = 0;
    int nim_sum = 0;
    int max_matches = get_max_matches(game);

    if (max_matches > game->matches_max)
        max_matches = game->matches_max;

    for (int i = 1; i <= game->size; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            if (game->map[i][j] == '|')
                sum++;
        }
        nim_sum = nim_sum ^ (sum % (max_matches));
        my_printf("sum = %i et nim_sum = %i\n", sum, nim_sum);
        sum = 0;
    }
    if (nim_sum > max_matches)
        nim_sum--;
    return nim_sum;
}

int get_right_line(t_info *game)
{
    int sum = 0;
    int def = 0;

    for (int i = 1; i <= game->size; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++) {
            if (game->map[i][j] == '|')
                sum++;
        }
        if (sum >= game->matches)
            def = i;
        if (((sum ^ game->matches) < sum) && sum >= game->matches)
            return i;
        sum = 0;
    }
    return def;
}

void ias_turn(t_info *game)
{
    game->matches = get_nim_sum(game);
    if (game->matches == 0)
        game->matches++;
    game->line = get_right_line(game);
    remove_matches(game);
    my_printf("AI removed %i match(es) from line %i\n",
            game->matches, game->line);
}
