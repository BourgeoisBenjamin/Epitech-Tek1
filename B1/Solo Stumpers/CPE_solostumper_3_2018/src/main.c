/*
** EPITECH PROJECT, 2019
** FAZZBIZZ
** File description:
** main
*/

#include "fazzbizz.h"

int main(int argc, char **argv)
{
    int nb1 = 0;
    int nb2 = 0;
    char *strerror = "Error: the second parameter must"\
        " be greater than the first one.\n";
    if (argc != 3)
        return 84;
    if (check_number(argv[1]) || check_number(argv[2]))
        return 84;

    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[2]);

    if (nb1 > nb2) {
        if (my_puterror(strerror) == 84)
            return 84;
        return 84;
    }
    fazzbizz(nb1, nb2);
    return 0;
}
