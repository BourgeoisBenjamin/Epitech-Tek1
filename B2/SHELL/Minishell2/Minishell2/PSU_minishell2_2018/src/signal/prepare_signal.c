/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** prepare_signal
*/

#include "minishell2.h"

int prepare_signal(void)
{
    signal(SIGINT, sigint_handler);
    return 0;
}
