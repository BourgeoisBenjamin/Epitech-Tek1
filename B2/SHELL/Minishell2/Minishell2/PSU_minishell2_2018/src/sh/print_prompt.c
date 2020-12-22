/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** print_prompt
*/

#include "minishell2.h"

void print_prompt(void)
{
    if (isatty(0))
        my_printf("$> ");
}
