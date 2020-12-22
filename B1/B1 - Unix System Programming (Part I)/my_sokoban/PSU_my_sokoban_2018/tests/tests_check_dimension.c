/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_check_map
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, check_dimension)
{
    t_map *map = malloc(sizeof(t_map));
    map->nb_cols = 2;
    map->nb_rows = 3;

    cr_expect_eq(check_dimension(map), 0);
}

Test(sokoban, check_dimension_1)
{
    t_map *map = malloc(sizeof(t_map));
    map->nb_cols = 7;
    map->nb_rows = 30;

    cr_expect_eq(check_dimension(map), 1);
}

Test(sokoban, check_dimension_2)
{
    t_map *map = malloc(sizeof(t_map));
    map->nb_cols = 0;
    map->nb_rows = 0;

    cr_expect_eq(check_dimension(map), 0);
}

Test(sokoban, check_dimension_3)
{
    t_map *map = malloc(sizeof(t_map));
    map->nb_cols = -2;
    map->nb_rows = -3;

    cr_expect_eq(check_dimension(map), 0);
}

Test(sokoban, check_dimension_4)
{
    t_map *map = malloc(sizeof(t_map));
    map->nb_cols = 3;
    map->nb_rows = 2;

    cr_expect_eq(check_dimension(map), 0);
}