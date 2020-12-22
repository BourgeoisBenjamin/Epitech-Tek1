/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** main file
*/

#include <102architect.h>

int main(int argc, char **argv)
{
    if (argc < 5) {
        display_usage(argc, argv);
        exit(84);
    }
    architect(argc, argv);
    
    return 0;
}