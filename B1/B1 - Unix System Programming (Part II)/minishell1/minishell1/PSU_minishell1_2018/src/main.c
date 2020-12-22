/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** main
*/

#include "minishell.h"

int main(int argc, char **argv, char **env)
{
    (void)argv;
    if (argc > 1) {
        my_printe("./mysh takes no argument\n");
        return (EXIT_ERROR);
    }
    print_prompt();
    if (prepare_my_sh(env) == EXIT_FAILURE)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}
