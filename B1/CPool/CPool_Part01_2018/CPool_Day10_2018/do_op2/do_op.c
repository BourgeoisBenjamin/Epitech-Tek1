/*
** EPITECH PROJECT, 2018
** do-op.c
** File description:
** Task 02 of Pool Day10
*/

#include <unistd.h>
#include <../include/my.h>
#include <doop_header.h>

struct operation_list operation[] =
{
    {'+', my_addition},
    {'-', my_soustraction},
    {'/', my_division},
    {'*', my_multiplication},
    {'%', my_modulo},
    {0, NULL},
};

int check_data(int argc, char *argv[], struct data *request)
{
    if (argc < 4) {
        return 1;
    }
    request->nb1 = my_getnbr(argv[1]);
    request->nb2 = my_getnbr(argv[3]);
    request->operator = *argv[2];

    if (*argv[2] == '/' && *argv[3] == '0') {
        my_putchar('0');
        return 1;
    } else if (*argv[2] == '%' && *argv[3] == '0') {
        my_putchar('0');
        return 1;
    }
    return 0;
}

int my_calculate(struct data *request)
{
    struct operation_list *p;
    p = (struct operation_list *) operation;

    while (p->funct != NULL) {
        if (p->operator == request-> operator) {
            return p->funct(request->nb1, request->nb2);
        }
        p++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    struct data request;

    if (check_data(argc, argv, &request)) {
        return 0;
    }
    my_put_nbr(my_calculate(&request));
    return 0;
}