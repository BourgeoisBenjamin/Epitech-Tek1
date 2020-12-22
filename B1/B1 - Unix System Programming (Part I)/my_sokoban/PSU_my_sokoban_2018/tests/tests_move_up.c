/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_move_up
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, move_up)
{
    t_map *map = malloc(sizeof(t_map));
    t_player *player = malloc(sizeof(t_player));
    player->x = 3;
    player->y = 2;
    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->map = str_to_2d_array(map);
    map->str = "##########\n#        #\n# P      #\n#  XO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->original_map = str_to_2d_array(map);
    move_up(map, player);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 11);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    free(map);
    free(player);
}

Test(sokoban, move_up_1)
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
    map->original_map = str_to_2d_array(map);
    move_up(map, player);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 41);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 21);
    free(map);
    free(player);
}

Test(sokoban, move_up_2)
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
    map->str = "##########\n#        #\n#        #\n#  XP  ###\n"       \
        "#        #\n"                                                  \
        "# OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_up(map, player);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    free(map);
    free(player);
}

Test(sokoban, move_up_3)
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
    map->str = "##########\n#        #\n#  X     #\n#  PO  ###\n"       \
        "#        #\n"                                                  \
        "# OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_up(map, player);
    cr_assert_arr_eq(map->map[2], map->original_map[2], 11);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    free(map);
    free(player);
}

Test(sokoban, move_up_4)
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
    map->str = "##########\n#        #\n#        #\n#   X  ###\n"       \
        "#   P    #\n"                                                  \
        "# OX     #\n##########\n";
    map->original_map = str_to_2d_array(map);
    move_up(map, player);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[4], map->original_map[4], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
    free(player);
}