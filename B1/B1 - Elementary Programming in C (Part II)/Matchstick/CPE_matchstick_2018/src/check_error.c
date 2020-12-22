/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** check_error
*/

#include <matchstick.h>

int check_error(int argc, char **argv, t_info *game)
{
    if (argc != 3) {
        for (int i = 1; argv[i]; i++) {
            if (argv[i][0] == '-' && argv[i][1] == 'h'
                && my_strlen(argv[i]) == 2 && argc == 2) {
                display_help();
                return 1;
            }
        }
        my_printf("Wrong usage. Type ./matchstick -h for more information\n");
        return 1;
    }
    if (check_save_arg(argv, game))
        return 1;
    return 0;
}