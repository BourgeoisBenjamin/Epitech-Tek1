/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** print_update_board_game
*/

#include <my.h>

int fill_pip(char **map, int size)
{
    int i = 0;
    for (int x = 1; x < size + 1; x++) {
        for (int y = size - i; y <= size + i; y++) {
            map[x][y] = '|';
        }
        i++;
    }
}

int fill_map(char **map, int size)
{
    my_memset(map[0], '*', size * 2 + 1);
    my_memset(map[size + 1], '*', size * 2 + 1);
    map[0][size * 2 + 1] = '\n';
    map[size + 1][size * 2 + 1] = '\n';

    for (int i = 1; i < size + 1; i++) {
        my_memset(map[i], ' ', 2 * size);
        map[i][0] = '*';
        map[i][2 * size] = '*';
        map[i][(2 * size + 1)] = '\n';
    }
    fill_pip(map, size);
}

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(char *) * nb_rows);

    if (tab == NULL) {
        free(tab);
        my_puterror("Error, retry\n");
        exit(84);
    }
    for (int i = 0; i < nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * nb_cols);
        if (tab[i] == NULL) {
            free(tab);
            my_puterror("Error, retry\n");
            exit(84);
        }
        my_memset(tab[i], '\0', nb_cols);
    }
    return tab;
}

char **create_map(int size)
{
    char **map = mem_alloc_2d_array(size + 2, size * 2 + 3);

    fill_map(map, size);
    return map;
}

void print_updated_board_game(int size, int line, int nb_matches)
{
    char **map = create_map(size);

    for (int i = 0; i < size + 2; i++) {
        my_printf("%s", map[i]);
    }
}