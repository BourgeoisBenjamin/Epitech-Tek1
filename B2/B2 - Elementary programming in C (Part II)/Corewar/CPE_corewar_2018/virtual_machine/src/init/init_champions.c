/*
** EPITECH PROJECT, 2019
** init_champions.c
** File description:
** init champions
*/

#include "vm.h"

void fill_header_info(char *dest, char *src, int size_max)
{
    while (*src != ' ' && *src != '\0')
        src++;
    if (*src == '\0')
        return;
    src++;
    for (int i = 0; src[i] != '\0' && i < size_max; i++)
        dest[i] = src[i];
}

void fill_command_line(char **commands, char *buffer)
{
    int nb = 0;

    while (commands[nb] != NULL)
        nb++;
    commands[nb] = my_strdup(buffer);
}

void fill_champion_infos(vm_t *champion)
{
    char *buffer = NULL;
    size_t size = 0;
    int end = 0;

    while ((end = getline(&buffer, &size, champion->fd)) > 0) {
        buffer[end - 1] = '\0';
        if (my_strcmp(".name", buffer) == 0)
            fill_header_info(champion->header->prog_name, buffer, 129);
        else if (my_strcmp(".comment", buffer) == 0)
            fill_header_info(champion->header->comment, buffer, 2049);
        else
            fill_command_line(champion->commands, buffer);
    }

}

void init_champions(vm_t **info)
{
    for (int i = 0; info[i] != NULL; i++) {
        fill_champion_infos(info[i]);
    }
    for (int i = 0; info[i] != NULL; i++) {
        printf("champion id: %d\n", info[i]->nb);
        printf("champion adress : %d\n", info[i]->adress);
        printf("name : %s\n", info[i]->header->prog_name);
        printf("comment : %s\n", info[i]->header->comment);
        for (int j = 0; info[i]->commands[j] != NULL; j++)
            printf("%s\n", info[i]->commands[j]);
        printf("\n\n");
    }
}