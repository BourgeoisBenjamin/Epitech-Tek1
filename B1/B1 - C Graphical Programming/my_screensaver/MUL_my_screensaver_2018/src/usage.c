/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** display usage functions
*/

#include <my_screensaver.h>

int bad_arguments(void)
{
    my_printf("./my_screensaver: bad arguments: 0 given but 1 is required\n");
    my_printf("retry with -h\n");
    return 84;
}

void display_animation_id(void)
{
    my_printf("1: Display a beautiful starry sky.\n");
    my_printf("2: Display lots of square.\n");
    my_printf("3: Display lots of circle\n");
    my_printf("4: Display lots of lines\n");
    my_printf("5: A Crazy circle\n");
    my_printf("6: A beautiful color background\n");
    my_printf("7: Widening circle\n");
    my_printf("8: Rotation cube 1\n");
    my_printf("9: Rotation cube 2\n");
    my_printf("10: Rotation cube 3\n");
    my_printf("11: A Google logo animation\n");
}

int display_usage(char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_printf("animation rendering in a CSFML window.\n\n");
        my_printf("USAGE\n  ./my_screensaver [OPTIONS] animation_id\n");
        my_printf("   animation_id    ID of the animation to process ");
        my_printf("(between 1 and %i).\n\nOPTIONS\n -d            ", MAX_ID);
        my_printf("    print the description of all the animations and quit.");
        my_printf("\n -h                print the usage and quit.\n");
        return 84;
    } else if (argv[1][0] && argv[1][1] == 'd') {
        display_animation_id();
        return 84;
    }
    return 0;
}
