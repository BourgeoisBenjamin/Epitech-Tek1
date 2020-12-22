/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** my_sh
*/

#include "minishell2.h"

pid_t create_process(void)
{
    pid_t pid = fork();
    while ((pid == -1) && (errno == EAGAIN)) {
        pid = fork();
    }
    return pid;
}