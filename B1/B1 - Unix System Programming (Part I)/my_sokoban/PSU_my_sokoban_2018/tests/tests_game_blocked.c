/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_game_blocked
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, game_blocked)
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
        "#X       #\n"                          \
        "#        #\n"                          \
        "# P O  ###\n"                          \
        "#        #\n"                          \
        "#XO      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_blocked(map), 1);
    free(map);
}

Test(sokoban, game_blocked_1)
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
        "# X      #\n"                          \
        "#        #\n"                          \
        "# P O  ###\n"                          \
        "#        #\n"                          \
        "#XO      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_blocked(map), 0);
    free(map);
}

Test(sokoban, game_blocked_2)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##############################\n"       \
        "#        ##        #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#  XO  ####  XO  ###\n"                        \
        "#        ##        ##        ##        #\n"    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##############################\n"       \
        "#        ##        #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#  XO  ####  XO  ###\n"                        \
        "#        ##        ##        ##        #\n"    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_blocked(map), 0);
    free(map);
}

Test(sokoban, game_blocked_3)
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
        "#       X#\n"                          \
        "#        #\n"                          \
        "# P O  ###\n"                          \
        "#        #\n"                          \
        "# O     X#\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_blocked(map), 1);
    free(map);
}

Test(sokoban, game_blocked_4)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##############################\n"       \
        "#        ##        #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#  XO  ####  XO  ###\n"                        \
        "#        ##        ##        ##        #\n"    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##############################\n"       \
        "#XX      ##X       #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#   O  ####   O  ###\n"                        \
        "#        ##       X##        ##        #\n"    \
        "# OX     ##XO      ## O      #\n##########\n";
    map->map = str_to_2d_array(map);
    cr_expect_eq(game_blocked(map), 0);
    free(map);
}