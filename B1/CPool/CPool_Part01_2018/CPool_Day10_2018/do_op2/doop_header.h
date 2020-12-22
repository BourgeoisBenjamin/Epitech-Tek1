/*
** EPITECH PROJECT, 2018
** Operations.c
** File description:
** Struct for my do-op
*/

struct data
{
    int nb1;
    int nb2;
    char operator;
};

struct operation_list
{
    char operator;
    int (*funct)(int, int);
};

int my_addition(int n1, int n2);
int my_soustraction(int n1, int n2);
int my_multiplication(int n1, int n2);
int my_division(int n1, int n2);
int my_modulo(int n1, int n2);