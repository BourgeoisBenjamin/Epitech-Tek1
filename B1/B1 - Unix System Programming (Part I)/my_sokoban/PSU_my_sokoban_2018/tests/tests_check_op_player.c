/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_check_op_player
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, check_op_player)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);

    cr_expect_eq(check_op_player(map), 1);
    free(map);
}

Test(sokoban, check_op_player_1)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "#  XO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);

    cr_expect_eq(check_op_player(map), 0);
    free(map);
}

Test(sokoban, check_op_player_2)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# P O  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);

    cr_expect_eq(check_op_player(map), 0);
    free(map);
}

Test(sokoban, check_op_player_3)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PX   ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);

    cr_expect_eq(check_op_player(map), 0);
    free(map);
}

Test(sokoban, check_op_player_4)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n"                   \
        "#  P     #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);

    cr_expect_eq(check_op_player(map), 0);
    free(map);
}