/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_check_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, check_str)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PXO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";

    cr_expect_eq(check_str(map), 1);
}

Test(sokoban, check_str_1)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##########\n"                   \
        "#        #\n"                          \
        "#        #\n"                          \
        "# PWO  ###\n"                          \
        "#        #\n"                          \
        "# OX     #\n"                          \
        "##########\n";

    cr_expect_eq(check_str(map), 0);
}

Test(sokoban, check_str_2)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##############################\n"       \
        "#        ##        #\n"                        \
        "#        ##        ##  P     #\n"              \
        "#  XO  ####  XO  ###\n"                                \
        "#        ##        ##        ##        #\n"            \
        "# OX     ## OX     ## OX     #\n"                      \
        "##########\n";

    cr_expect_eq(check_str(map), 1);
}

Test(sokoban, check_str_3)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "#\n"                            \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n"                                   \
        "#\n";

    cr_expect_eq(check_str(map), 1);
}

Test(sokoban, check_str_4)
{
    t_map *map = malloc(sizeof(t_map));
    map->str = "##PPOOPXXX####\n";

    cr_expect_eq(check_str(map), 1);
}