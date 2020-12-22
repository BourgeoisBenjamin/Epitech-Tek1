/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** main file
*/

#include <my_screensaver.h>

int main(int argc, char **argv)
{
    int id = 0;

    if (argc < 2 || argc > 2) {
        bad_arguments();
        return 84;
    }
    if (display_usage(argv) == 84)
        return 84;
    if (!(1 <= my_getnbr(argv[1]) && my_getnbr(argv[1]) <= MAX_ID)) {
        my_printf("%s is a bad animation ID\n", argv[1]);
        display_animation_id();
        return 84;
    }

    id = my_getnbr(argv[1]);
    my_screensaver(id);

    return 0;
}