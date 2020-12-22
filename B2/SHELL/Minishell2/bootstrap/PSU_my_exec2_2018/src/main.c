/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** main
*/

#include <minishell2.h>

void pipeline(char ***cmd)
{
    int fd[2];
    pid_t pid;
    int status;
    int fdd = 0; /* Backup */

    while (cmd[0] != NULL) {
        pipe(fd); /* Sharing bidiflow */
        if ((pid = fork()) == -1) {
            perror("fork");
            exit(84);
        }
        else if (pid == 0) {
            dup2(fdd, 0);
            if (cmd[0 + 1] != NULL) {
                dup2(fd[1], 1);
            }
            close(fd[0]);
            execve(cmd[0][0], cmd[0], NULL);
            exit(0);
        }
        else {
            waitpid(pid, &status, WUNTRACED | WCONTINUED); /* Collect childs */
            //close(fd[1]);
            fdd = fd[0];
            cmd++;
        }
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char **command1 = my_str_to_word_array(argv[1], ' ');
    char **command2 = my_str_to_word_array(argv[2], ' ');
    //char **command3 = my_str_to_word_array(argv[3], ' ');
    char **tab_command[] = {command1, command2, NULL};//command3, NULL};

    pipeline(tab_command);
    return (0);
}
