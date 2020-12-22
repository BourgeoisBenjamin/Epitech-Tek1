/*
** EPITECH PROJECT, 2019
** DANTE
** File description:
** error
*/

#include "generator.h"

int error(int argc, char **argv)
{
    if (argc != 3 && argc != 4) {
        my_printe("Error\n./generator x y [perfect]\n");
        return (-1);
    }
    if (!my_str_is_num(argv[1]) || !my_str_is_num(argv[2])) {
        my_printe("Error\n./generator x y [perfect]\n");
        return (-1);
    } else if (my_getnbr(argv[1]) <= 0 || my_getnbr(argv[2]) <= 0) {
        my_printe("Error\n./generator x y [perfect]\n");
        return (-1);
    }
    if (argc == 4 && (my_strcmp(argv[3], "perfect") != 0
    || my_strlen(argv[3]) != 7)) {
        my_printe("Error\n./generator x y [perfect]\n");
        return (-1);
    }
    return (0);
}
