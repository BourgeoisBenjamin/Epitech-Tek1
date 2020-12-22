/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_sh
*/

#include "minishell.h"

int child_process(t_info *program)
{
    program->path = search_env(program->env, "PATH=");
    char **path_tab = my_str_to_word_array(program->path, ':');
    free(program->path);

    program->path = get_right_path(program->arg[0], path_tab);
    free_array(path_tab);
    if (program->path == NULL) {
        my_printe("%s: Command not found.\n", program->arg[0]);
    } else {
        execve(program->path, program->arg, program->env);
        if (errno == 8) {
            my_printe("%s: %s. Wrong Architecture.\n", program->arg[0],
            strerror(errno));
        } else
            my_printe("%s: %s.\n", program->arg[0], strerror(errno));
    }
    free_child(program);
    exit(EXIT_SUCCESS);
}
