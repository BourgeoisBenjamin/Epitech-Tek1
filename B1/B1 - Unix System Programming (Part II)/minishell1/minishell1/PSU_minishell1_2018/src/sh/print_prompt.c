/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** print_prompt
*/

#include "minishell.h"

void print_prompt(void)
{
    if (isatty(0))
        my_printf("$> ");
}
