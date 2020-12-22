/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** prepare_signal
*/

#include "minishell.h"

int prepare_signal(void)
{
    signal(SIGINT, sigint_handler);
    return 0;
}
