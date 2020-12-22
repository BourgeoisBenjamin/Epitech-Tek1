/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_game_win
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, game_win)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# P X  ###\n"                          \
        "#        #\n"                          \
        "# X      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_win(map), 1);
    free(map);
}

Test(sokoban, game_win_1)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# X      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_win(map), 0);
    free(map);
}

Test(sokoban, game_win_2)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_win(map), 0);
    free(map);
}

Test(sokoban, game_win_3)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# P X  ###\n"                          \
        "#        #\n"                          \
        "# X      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_win(map), 1);
    free(map);
}

Test(sokoban, game_win_4)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# P    ###\n"                          \
        "#        #\n"                          \
        "#        #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_win(map), 0);
    free(map);
}