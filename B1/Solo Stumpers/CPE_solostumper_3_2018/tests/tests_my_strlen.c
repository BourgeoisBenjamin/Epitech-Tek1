/*
** EPITECH PROJECT, 2018
** FAZZBIZZ
** File description:
** Unit Tests Criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "fazzbizz.h"

Test(my_strlen, return_3)
{
    cr_expect_eq(my_strlen("45b"), 3);
}

Test(my_strlen, return_4)
{
    cr_expect_eq(my_strlen("    "), 4);
}

Test(my_strlen, return_9)
{
    cr_expect_eq(my_strlen("59a'_(0)r"), 9);
}

Test(my_strlen, return_11)
{
    cr_expect_eq(my_strlen("Hello World"), 11);
}
