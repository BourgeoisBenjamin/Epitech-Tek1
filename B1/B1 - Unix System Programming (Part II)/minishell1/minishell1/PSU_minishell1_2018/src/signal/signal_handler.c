/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** signal_handler
*/

#include "minishell.h"

void sigint_handler(int sig)
{
    (void)sig;
    if (isatty(0))
        my_printf("\n$> ");
    else
        my_printf("\n");
}
