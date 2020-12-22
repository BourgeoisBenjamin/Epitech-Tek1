/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** tests_bubble_sort_array.c
*/

#include <pushswap.h>

Test(bubble_sort_array, test1)
{
    int array[6] = { 6, 5, 4, 3, 2, 1 };
    int final[6] = { 1, 2, 3, 4, 5, 6 };

    bubble_sort_array(array, 6);

    cr_assert_arr_eq(array, final, 6);
}

Test(bubble_sort_array, test2)
{
    int array[6] = { 1, 2, 3, 4, 5, 6 };
    int final[6] = { 1, 2, 3, 4, 5, 6 };

    bubble_sort_array(array, 6);

    cr_assert_arr_eq(array, final, 6);
}

Test(bubble_sort_array, test3)
{
    int array[6] = { 67, 58, 5674, 38, 2, 0 };
    int final[6] = { 0, 2, 38, 58, 67, 5674 };

    bubble_sort_array(array, 6);

    cr_assert_arr_eq(array, final, 6);
}