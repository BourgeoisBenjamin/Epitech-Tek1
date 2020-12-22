/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** sokoban.c
*/

#include <sokoban.h>

void prepare_structure(t_map *map, t_player *player, char **argv)
{
    if (map == NULL || player == NULL) {
        free(map);
        free(player);
        exit(84);
    }

    map->str = create_str(argv);
    find_nb_rows_cols(argv, map);
    map->map = str_to_2d_array(map);
    map->original_map = str_to_2d_array(map);

    if (!check_map(map) || !check_str(map)) {
        my_puterror("Invalid File\n");
        free(map);
        free(player);
        exit(84);
    }
}

int sokoban(char **argv)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));

    prepare_structure(map, player, argv);

    if (game(map, player)) {
        free(map);
        free(player);
        return 1;
    } else {
        free(map);
        free(player);
        return 0;
    }
}
