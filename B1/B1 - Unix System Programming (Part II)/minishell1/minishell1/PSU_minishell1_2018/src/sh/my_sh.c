/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_sh
*/

#include "minishell.h"

int my_sh(t_info *program, t_builtin **builtin)
{
    while ((program->command = get_next_line(0)) != NULL) {
        repair_env(program);
        free_array(program->arg);
        program->arg = my_str_to_word_array(program->command, ' ');
        free(program->command);
        if (program->arg == NULL) {
            return EXIT_FAILURE;
        } else if (program->arg[0] == NULL) {
            print_prompt();
            continue;
        }
        if (my_strcmp(program->arg[0], "exit") == 0
            && my_strlen(program->arg[0]) == 4)
            break;
        exec_cmd(program, builtin);
        print_prompt();
    }
    free_all(program, builtin);
    return (EXIT_SUCCESS);
}
