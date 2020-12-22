/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_move_left
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, move_left)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 3;
    player->y = 2;
    map->str = "##########\n#        #\n#        #\n#P XO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##########\n#        #\n#        #\n#P XO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->original_map = str_to_2d_array(map);
    move_left(map, player);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 11);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    free(map);
    free(player);
}

Test(sokoban, move_left_1)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 4;
    player->y = 8;
    map->str = "##############################\n#        ##        #\n" \
        "#        ##        ##        #\n#  XO  ####  XO  ###\n"        \
        "#       P##        ##        ##        #\n"                    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##############################\n#        ##        #\n" \
        "#        ##        ##        #\n#  XO  ####  XO  ###\n"        \
        "#      P ##        ##        ##        #\n"                    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_left(map, player);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 41);
    free(map);
    free(player);
}

Test(sokoban, move_left_2)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 4;
    player->y = 4;
    map->str = "##########\n#        #\n#        #\n#  XO  ###\n"       \
        "#   P    #\n"                                                  \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##########\n#        #\n#        #\n#  XO  ###\n"       \
        "#  P     #\n"                                                  \
        "# OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_left(map, player);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
    free(player);
}

Test(sokoban, move_left_3)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 4;
    player->y = 3;
    map->str = "##########\n#        #\n#        #\n#  XO  ###\n"       \
        "#  P     #\n"                                                  \
        "# OX     #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##########\n#        #\n#        #\n#  XO  ###\n"       \
        "# P      #\n"                                                  \
        "# OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_left(map, player);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 11);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    free(map);
    free(player);
}

Test(sokoban, move_left_4)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 5;
    player->y = 4;
    map->str = "##########\n#        #\n#        #\n#   O  ###\n"       \
        "#   X    #\n"                                                  \
        "# OXP    #\n##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##########\n#        #\n#        #\n#   O  ###\n"       \
        "#   X    #\n"                                                  \
        "# XP     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_left(map, player);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
    free(player);
}