/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** help
*/

#include <my_ls.h>

void display_help(void)
{
    my_printf("./my_ls [OPTION] [FILE]\n");
    my_printf("\tExample : ./my_ls -l -t\n\n");
    my_printf("OPTION:\n");
    my_printf("\t-l : Display all information about files and folders\n");
    my_printf("\t-R : List sub-directories recursively\n");
    my_printf("\t-d : list directories themselves\n");
    my_printf("\t-r : reverse order by name\n");
    my_printf("\t-t : reverse order by time\n");
}

int help(char arg, t_flag *flag)
{
    if (arg == 'h') {
        display_help();
        free(flag);
        exit(0);
    } else {
        my_printf("Wrong argument. Try ./my_ls -h for more information\n");
        free(flag);
        exit(84);
    }
}