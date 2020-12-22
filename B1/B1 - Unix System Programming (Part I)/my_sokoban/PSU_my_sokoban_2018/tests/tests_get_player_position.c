/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_get_player_position
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, set_player_position)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
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
    set_player_position(map, player, 3, 2);
    cr_assert_neq(player, NULL);
    cr_assert_eq(player->x, 3);
    cr_assert_eq(player->y, 2);
    free(player);
    free(map);
}

Test(sokoban, get_player_position_1)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    map->str = "P#########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "#  XO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;

    map->map = str_to_2d_array(map);
    set_player_position(map, player, 0, 0);
    cr_assert_neq(player, NULL);
    cr_assert_eq(player->x, 0);
    cr_assert_eq(player->y, 0);
    free(player);
    free(map);
}

Test(sokoban, get_player_position_2)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    map->str = "#####P####\n";

    map->nb_cols = 11;
    map->nb_rows = 1;

    map->map = str_to_2d_array(map);
    set_player_position(map, player, 0, 5);
    cr_assert_neq(player, NULL);
    cr_assert_eq(player->x, 0);
    cr_assert_eq(player->y, 5);
    free(player);
    free(map);
}

Test(sokoban, get_player_position_3)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    map->str = "#\n"                            \
        "#\n"                                   \
        "#\n"                                   \
        "P\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n";
    map->nb_cols = 2;
    map->nb_rows = 7;

    map->map = str_to_2d_array(map);
    set_player_position(map, player, 3, 0);
    cr_assert_neq(player, NULL);
    cr_assert_eq(player->x, 3);
    cr_assert_eq(player->y, 0);
    free(player);
    free(map);
}

Test(sokoban, get_player_position_4)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    map->str = "##############################\n"       \
        "#        ##        #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#  XO  ####  XO  ###\n"                                \
        "#        ##        ##        ##        #\n"            \
        "# OX     ## OX     ## OX     #\n"                      \
        "##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;

    map->map = str_to_2d_array(map);
    set_player_position(map, player, 2, 23);
    cr_assert_neq(player, NULL);
    cr_assert_eq(player->x, 2);
    cr_assert_eq(player->y, 23);
    free(player);
    free(map);
}