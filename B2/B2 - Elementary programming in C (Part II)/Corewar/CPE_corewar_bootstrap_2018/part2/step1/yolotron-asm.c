/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>
#include <stdio.h>
#include <errno.h>

typedef struct s_info
{
    int code;
    char *word;
    int param1;
    int param2;
} info_t;

void free_new_command(info_t *new_command)
{
    if (new_command == NULL)
        return;
    if (new_command->word)
        free(new_command->word);
    free(new_command);
}

info_t *add(char **info)
{
    info_t *new_command = malloc(sizeof(info_t));
    char *endptr = NULL;
    errno = 0;

    if (new_command == NULL)
        return (NULL);
    new_command->code = 0x01;
    new_command->param1 = strtol(info[1], &endptr, 10);
    new_command->param2 = strtol(info[2], &endptr, 10);
    if (errno != 0) {
        free(new_command);
        return (NULL);
    }
    return (new_command);
}

info_t *sub(char **info)
{
    info_t *new_command = malloc(sizeof(info_t));
    char *endptr = NULL;
    errno = 0;

    if (new_command == NULL)
        return (NULL);
    new_command->code = 0x01;
    new_command->param1 = strtol(info[1], &endptr, 10);
    new_command->param2 = strtol(info[2], &endptr, 10);
    if (errno != 0) {
        free(new_command);
        return (NULL);
    }
    return (new_command);
}

info_t *mul(char **info)
{
    info_t *new_command = malloc(sizeof(info_t));
    char *endptr = NULL;
    errno = 0;

    if (new_command == NULL)
        return (NULL);
    new_command->code = 0x01;
    new_command->param1 = strtol(info[1], &endptr, 10);
    new_command->param2 = strtol(info[2], &endptr, 10);
    if (errno != 0) {
        free(new_command);
        return (NULL);
    }
    return (new_command);
}

info_t *put(char **info)
{
    info_t *new_command = malloc(sizeof(info_t));
    char *endptr = NULL;
    errno = 0;

    if (new_command == NULL)
        return (NULL);
    new_command->code = 0x01;
    new_command->param1 = strtol(info[1], &endptr, 10);
    new_command->param2 = strtol(info[2], &endptr, 10);
    if (errno != 0) {
        free(new_command);
        return (NULL);
    }
    return (new_command);
}

int count_space(char *line)
{
    int nb = 0;

    for (int i = 0; line[i]; i++) {
        if (line[i] == ' ')
            nb++;
    }
    return (nb);
}

char **verif_line(char *line)
{
    char **info = my_str_to_word_array(line, ' ');

    if (strcmp(info[0], "put") == 0 && count_space(line) != 1) {
        free_array(info);
        return (NULL);
    }
    if (strcmp(info[0], "put") != 0 && count_space(line) != 2) {
        free_array(info);
        return (NULL);
    }
    return (info);
}

int asm2(int argc, char **argv)
{
    int fd = -1;
    char *line = NULL;
    info_t *new_command = NULL;
    info_t *(*tab_ft[5])(char**) = {&add, &sub, &mul, &put, NULL};
    char *ft_name[5] = {"add", "sub", "mul", "put", NULL};
    char **info = NULL;

    if (argc != 2)
        return (84);
    if ((fd = open(argv[1], O_CREAT | O_RDWR, 0664)) == -1)
        return (84);
    while ((line = get_next_line(fd)) != NULL) {
        if ((info = verif_line(line)) == NULL) {
            close(fd);
            return (84);
        }
        for (int i = 0; tab_ft[i]; i++) {
            if (strcmp(ft_name[i], info[0]) == 0) {
                if ((new_command = tab_ft[i](info)) == NULL) {
                    free_array(info);
                    close(fd);
                    return (84);
                }
                break;
            }
            if (i == 4) {
                free_array(info);
                close(fd);
                return (84);
            }
        }
        free_new_command(new_command);
        free_array(info);
    }
    close(fd);
    return (0);
}

int main(int argc, char **argv)
{
    if (asm2(argc, argv) == 84) {
        printf("ahhhh no, don’t agree!\n");
        return (84);
    }
    return (0);
}
