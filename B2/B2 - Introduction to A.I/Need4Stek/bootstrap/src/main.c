/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>

int exec_cmd(char *str)
{
    char *output = NULL;
    my_printf("%s", str);
    output = get_next_line(0);
    my_printe("%s\n", output);
    free(output);
    return (0);
}


int main(void)
{
    exec_cmd("START_SIMULATION\n");
    exec_cmd("CYCLE")
    exec_cmd("CAR_FORWARD:1\n");
    exec_cmd("STOP_SIMULATION\n");
    return (0);
}
