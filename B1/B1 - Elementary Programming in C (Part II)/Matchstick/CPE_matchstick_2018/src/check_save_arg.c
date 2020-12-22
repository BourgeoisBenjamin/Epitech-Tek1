/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** check_save_arg
*/

#include <matchstick.h>

int check_save_arg(char **argv, t_info *game)
{
    char *error = "Bad argument.\nType ./matchstick -h for more information\n";

    for (int i = 1; argv[i]; i++) {
        for (int j = 0; argv[i][j]; j++) {
            if (!('0' <= argv[i][j] && argv[i][j] <= '9')) {
                my_printf("%s", error);
                return 1;
            }
        }
    }
    game->size = my_getnbr(argv[1]);
    game->matches_max = my_getnbr(argv[2]);
    if (!(1 < game->size && game->size < 100) || game->matches_max <= 0) {
        my_printf("%s", error);
        return 1;
    }
    game->rows = game->size + 2;
    game->cols = game->size * 2 + 3;
    return 0;
}