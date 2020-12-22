/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_replace_o
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, replace_o)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##########\n#        #\n#        #\n# PX   ###\n#        #\n" \
        "#  X     #\n"                                                  \
        "##########\n";
    map->map = str_to_2d_array(map);

    replace_o(map, 3, 4);
    replace_o(map, 5, 2);

    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
}

Test(sokoban, replace_o_1)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);

    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "#  X     #\n"                                                  \
        "##########\n";
    map->map = str_to_2d_array(map);
    replace_o(map, 3, 4);
    replace_o(map, 5, 2);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
}

Test(sokoban, replace_o_2)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->nb_cols = 11;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);

    map->str = "##########\n#        #\n#        #\n# PXO  ###\n#        #\n" \
        "# OX     #\n"                                                  \
        "##########\n";
    map->map = str_to_2d_array(map);
    replace_o(map, 3, 4);
    replace_o(map, 5, 2);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
}

Test(sokoban, replace_o_3)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##############################\n"       \
        "#        ##        #\n"                                        \
        "#        ##        ##  P     #\n#  XO  ####  XO  ###\n"        \
        "#        ##        ##        ##        #\n"                    \
        "# OX     ## OX     ## OX     #\n##########\n";
    map->nb_cols = 41;
    map->nb_rows = 7;
    map->original_map = str_to_2d_array(map);
    map->str = "##############################\n"       \
        "#        ##        #\n"                                        \
        "#        ##        ##  P     #\n#  XO  ####  X   ###\n"        \
        "#        ##        ##        ##        #\n"                    \
        "#  X     ## OX     ## OX     #\n##########\n";
    map->map = str_to_2d_array(map);
    replace_o(map, 3, 14);
    replace_o(map, 5, 2);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 11);
    cr_assert_arr_eq(map->map[5], map->original_map[5], 11);
    free(map);
}

Test(sokoban, replace_o_4)
{
    t_map *map = malloc(sizeof(t_map));

    map->str = "#\n#\n#\nO\n#\n#\n#\n";
    map->nb_cols = 2;
    map->nb_rows = 7;

    map->original_map = str_to_2d_array(map);

    map->str = "#\n#\n#\n \n#\n#\n#\n";
    map->map = str_to_2d_array(map);

    replace_o(map, 3, 0);
    cr_assert_arr_eq(map->map[3], map->original_map[3], 2);
    free(map);
}