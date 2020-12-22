/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** main
*/

#include <minishell2.h>

int main(int argc, char **argv)
{
    (void)argc;
    char ***tab_command = malloc(sizeof(char **) * 4);
    tab_command[0] = my_str_to_word_array(argv[1], ' ');
    tab_command[1] = my_str_to_word_array(argv[2], ' ');
    tab_command[2] = my_str_to_word_array(argv[3], ' ');
    tab_command[3] = NULL;
    int status2;
    int pid2;
    int fd1[2];
    int fd2[2];

    pipe(fd2);
    pipe(fd1);

    if ((pid2 = fork()) == -1) {
        exit(84);
    } else if (pid2 == 0) {
        dup2(fd2[1], 1);
        close(fd2[0]);
        close(fd2[1]);
        execve(tab_command[0][0], tab_command[0], NULL);
    } else {
        close(fd2[0]);
        close(fd2[1]);
        waitpid(pid2, &status2, WUNTRACED | WCONTINUED);
    }

    if ((pid2 = fork()) == -1) {
        exit(84);
    } else if (pid2 == 0) {
        dup2(fd2[0], 0);
        dup2(fd1[1], 1);
        close(fd1[0]);
        close(fd2[1]);
        execve(tab_command[1][0], tab_command[1], NULL);
    } else {
        close(fd1[0]);
        waitpid(pid2, &status2, WUNTRACED | WCONTINUED);
    }

    if ((pid2 = fork()) == -1) {
        exit(84);
    } else if (pid2 == 0) {
        dup2(fd1[0], 0);
        close(fd1[0]);
        close(fd1[1]);
        execve(tab_command[2][0], tab_command[2], NULL);
        exit(0);
    } else {
        close(fd1[0]);
        close(fd1[1]);
        waitpid(pid2, &status2, WUNTRACED | WCONTINUED);
    }
}


int main(int argc, char **argv)
{
    (void)argc;
    char ***tab_command = malloc(sizeof(char **) * 4);
    tab_command[0] = my_str_to_word_array(argv[1], ' ');
    tab_command[1] = my_str_to_word_array(argv[2], ' ');
    tab_command[2] = my_str_to_word_array(argv[3], ' ');
    tab_command[3] = NULL;

    int pid1;
    int pid2;
    int status1;
    int status2;
    int fd1[2];
    int fd2[2];

    pipe(fd1);

    if ((pid1 = fork()) == -1) {
        exit(84);
    } else if (pid1 == 0) {
        pipe(fd2);
        if ((pid2 = fork()) == -1) {
            exit(84);
        } else if (pid2 == 0) {
            dup2(fd2[1], 1);
            close(fd2[0]);
            close(fd2[1]);
            execve(tab_command[0][0], tab_command[0], NULL);
        } else {
            waitpid(pid2, &status2, WUNTRACED | WCONTINUED);
            dup2(fd2[0], 0);
            dup2(fd1[1], 1);
            close(fd2[0]);
            close(fd2[1]);
            execve(tab_command[1][0], tab_command[1], NULL);
        }
    } else {
        waitpid(pid1, &status1, WUNTRACED | WCONTINUED);
        dup2(fd1[0], 0);
        close(fd1[0]);
        close(fd1[1]);
        execve(tab_command[2][0], tab_command[2], NULL);
    }

}
*/
