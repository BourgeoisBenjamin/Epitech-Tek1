/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_reset_game
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, reset_game)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n#        #\n#        #\n# PXO  ###\n"       \
        "#        #\n"                                                  \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->map = str_to_2d_array(map);
    map->map[4][5] = 'W';
    reset_game(map);
    cr_assert_arr_eq(map->map[0], map->original_map[0], 11);
    cr_assert_arr_eq(map->map[1], map->original_map[1], 11);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 11);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    cr_assert_arr_eq(map->map[6], map->original_map[6], 11);
    free(map);
}

Test(sokoban, reset_game_1)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##############################\n"                       \
        "#        ##        #\n#        ##        ##  P     #\n"        \
        "#  XO  ####  XO  ###\n"                                        \
        "#        ##        ##        ##        #\n"                    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->map = str_to_2d_array(map);
    map->map[4][40] = 'W';
    reset_game(map);
    cr_assert_arr_eq(map->map[0], map->original_map[0], 32);
    cr_assert_arr_eq(map->map[1], map->original_map[1], 22);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 32);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 22);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 42);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 32);
    cr_assert_arr_eq(map->map[6], map->original_map[6], 12);
    free(map);
}

Test(sokoban, reset_game_2)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "#\n#\n#\nO\n#\n#\n#\n";
    map->nb_cols = 2;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->map = str_to_2d_array(map);
    map->map[0][5] = 'W';
    map->map[1][5] = 'W';
    reset_game(map);

    cr_assert_arr_eq(map->map[0], map->original_map[0], 2);
    cr_assert_arr_eq(map->map[1], map->original_map[1], 2);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 2);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 2);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 2);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 2);
    cr_assert_arr_eq(map->map[6], map->original_map[6], 2);

    free(map);
}

Test(sokoban, reset_game_3)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "#\n"                            \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n";
    map->nb_cols = 2;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->map = str_to_2d_array(map);
    map->map[0][1] = 'W';
    reset_game(map);

    cr_assert_arr_eq(map->map[0], map->original_map[0], 2);
    cr_assert_arr_eq(map->map[1], map->original_map[1], 2);
    free(map);
}

Test(sokoban, reset_game_4)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PWO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->map = str_to_2d_array(map);
    map->map[3][5] = 'W';
    map->map[4][5] = 'W';
    reset_game(map);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 2);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 2);
    free(map);
}