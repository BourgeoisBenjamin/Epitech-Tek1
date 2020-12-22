/*
** EPITECH PROJECT, 2018
** Bootstrap evalexpr
** File description:
** Bootstrap Evalexpr
*/

#include <my.h>

int number(char **str);
int summands(char **str);

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(summands(&av[1]));
        my_putchar('\n');        
        return 0;
    }
    return 84;
}
