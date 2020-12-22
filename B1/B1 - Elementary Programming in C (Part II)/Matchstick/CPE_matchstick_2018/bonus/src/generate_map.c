/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** generate_map
*/

#include <matchstick.h>

int fill_pip(t_info *game)
{
    int i = 0;
    game->nb_matches = 0;
    for (int j = 1; j < game->size + 1; j++) {
        for (int k = game->size - i; k <= game->size + i; k++) {
            game->map[j][k] = '|';
            game->nb_matches += 1;
        }
        i++;
    }
    return 0;
}

int fill_map(t_info *game)
{
    my_memset(game->map[0], '*', game->size * 2 + 1);
    my_memset(game->map[game->size + 1], '*', game->size * 2 + 1);

    for (int i = 1; i < game->size + 1; i++) {
        my_memset(game->map[i], ' ', 2 * game->size);
        game->map[i][0] = '*';
        game->map[i][2 * game->size] = '*';
        game->map[i][(2 * game->size + 1)] = '\0';
    }
    fill_pip(game);
    return 0;
}

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(char *) * nb_rows);

    if (tab == NULL) {
        my_puterror("Error Malloc\n");
        return NULL;
    }

    for (int i = 0; i < nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * nb_cols);
        if (tab[i] == NULL) {
            my_puterror("Error Malloc\n");
            return NULL;
        }
        my_memset(tab[i], '\0', nb_cols);
    }
    return tab;
}

int generate_map(t_info *game)
{
    game->map = mem_alloc_2d_array(game->rows, game->cols);

    if (game->map == NULL)
        return 1;

    fill_map(game);

    return 0;
}