/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_mem_alloc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, mem_alloc)
{
    cr_expect_str_eq(mem_alloc("test", "premier"), "testpremier");
}

Test(sokoban, mem_alloc_1)
{
    cr_expect_str_eq(mem_alloc("test", ""), "test");
}

Test(sokoban, mem_alloc_2)
{
    cr_expect_str_eq(mem_alloc("test\n\n", "premier\n"), "test\n\npremier\n");
}

Test(sokoban, mem_alloc_3)
{
    cr_expect_str_eq(mem_alloc("1234567890", "098765"), "1234567890098765");
}

Test(sokoban, mem_alloc_4)
{
    cr_expect_str_eq(mem_alloc("_ç'_)é($", "ùù**\n"), "_ç'_)é($ùù**\n");
}