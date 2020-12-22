/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** header
*/

#ifndef MINISHELL1_H
#define MINISHELL1_H

#include "my.h"
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

typedef struct s_info
{
    char **arg;
    char **env;
    int nb_arg;
    int status;
    pid_t pid;
    pid_t child_pid;

} t_info;

int arg_in_tab(char *arg, t_info *program);
int get_program_arg(char *arg, t_info *program);

#endif