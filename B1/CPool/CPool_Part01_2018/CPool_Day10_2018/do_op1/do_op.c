/*
** EPITECH PROJECT, 2018
** do-op.c
** File description:
** Task 02 of Pool Day10
*/

#include <unistd.h>
#include <my.h>

int my_addition(int n1, int n2);
int my_soustraction(int n1, int n2);
int my_multiplication(int n1, int n2);
int my_division(int n1, int n2);
int my_modulo(int n1, int n2);

int check_data(int argc, char *argv[])
{
    if (argc < 4) {
        return 1;
    }
    if (*argv[2] == '/' && *argv[3] == '0') {
        my_putchar('0');
        return 1;
    } else if (*argv[2] == '%' && *argv[3] == '0') {
        my_putchar('0');
        return 1;
    }
    return 0;
}

int my_calculate(char *argv[])
{
	switch (*argv[2]) {
		case '+':
			return(my_addition(*argv[1], *argv[3]));
		case '-':
			return(my_soustraction(*argv[1], *argv[3]));
		case '*':
			return(my_multiplication(*argv[1], *argv[3]));
		case '/':
			return(my_division(*argv[1], *argv[3]));
		case '%':
			return(my_modulo(*argv[1], *argv[3]));
		default:
			my_putstr("Please check your operand\n");
			return 0;
	}
}

int main(int argc, char **argv)
{
    if (check_data(argc, argv)) {
        my_putstr("Usage : Nb1 (operand) Nb2\nDivision or modulu by zero impossible");
        return 0;
    }
    my_put_nbr(my_calculate(argv));
    return 0;
}