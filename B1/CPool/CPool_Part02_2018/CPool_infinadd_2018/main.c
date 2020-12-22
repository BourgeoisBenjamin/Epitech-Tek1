/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Main file for Infinadd Project 2018
*/

#include <my.h>
#include <stdlib.h>

int infinadd(char *s1, char *s2);

int main(int argc, char **argv)
{
    if (argc == 3) {
        infinadd(argv[1], argv[2]);
    } else {
	my_putstr("Error ! Too many or not enough arguments!");
	return 0;
    }
    my_putchar('\n');
    return 0;
}
