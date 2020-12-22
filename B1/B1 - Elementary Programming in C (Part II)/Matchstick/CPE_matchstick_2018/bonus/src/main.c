/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** main
*/

#include <matchstick.h>

int main(int argc, char **argv)
{
    t_info *game = malloc(sizeof(t_info));
    int win = 0;
    if (game == NULL || check_error(argc, argv, game)) {
        free(game);
        return 84;
    }
    if (generate_map(game)) {
        delete_map(game);
        free(game);
        return 84;
    }
    game->return_status = -1;
    if (matchstick(game)) {
        my_putchar('\n');
        win = 0;
    } else
        win = game->return_status;
    delete_map(game);
    free(game);
    return win;
}
