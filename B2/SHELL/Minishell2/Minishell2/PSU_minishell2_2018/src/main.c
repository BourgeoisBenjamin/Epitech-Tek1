/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** main
*/

#include "minishell2.h"

int main(int argc, char **argv, char **env)
{
    (void)argv;
    if (argc > 1) {
        my_printe("./mysh takes no argument\n");
        return (EXIT_ERROR);
    }
    return (shell(env));
}
