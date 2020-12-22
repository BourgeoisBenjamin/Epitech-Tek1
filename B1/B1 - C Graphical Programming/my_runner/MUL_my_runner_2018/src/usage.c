/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** usage
*/

#include <runner.h>

int check_arg(int argc, char **argv, t_instance *instance)
{
    if (argc != 2) {
        my_printf("./my_runner: bad arguments: 0 given but 1 is required\n");
        my_printf("retry with -h\n");
        return 1;
    }
    if (argv[1][0] == '-') {
        if (argv[1][1] == 'h') {
            display_usage();
            return 1;
        }
        if (argv[1][1] == 'i')
            instance->infinity = 1;
        else
            instance->infinity = 0;
    }
    return 0;
}

void display_usage(void)
{
    my_printf("Finite runner created with CSFML.\n\n");
    my_printf("USAGE\n\t./my_runner map.txt\n\n\n");
    my_printf("OPTIONS\n\t-i\t\tlaunch the game in infinty mode.\n\t");
    my_printf("-h\t\tprint the usage and quit.\n\n");
    my_printf("USER INTERACTIONS\n\tSPACE_KEY\tjump.\n");
}