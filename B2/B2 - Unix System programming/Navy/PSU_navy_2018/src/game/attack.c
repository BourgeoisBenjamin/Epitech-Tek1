/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Attack function
*/

#include "navy.h"

int check_attack(char *attack)
{
    if (my_strlen(attack) != 2)
        return 1;
    if (!('A' <= attack[0] && attack[0] <= 'H'))
        return 1;
    if (!('1' <= attack[1] && attack[1] <= '8'))
        return 1;
    return 0;
}

int get_attack(void)
{
    int attack_int = 0;
    char *attack = NULL;
    my_printf("attack: ");
    attack = get_next_line(0);

    if (attack == NULL) {
        return (-1);
    } else if (check_attack(attack)) {
        my_printf("wrong position\n");
        free(attack);
        return (get_attack());
    }
    attack_int = (attack[0] - 'A' + 1) * 10;
    attack_int += attack[1] - '0';
    free(attack);
    return attack_int;
}

void check_attack_boat(t_game *info)
{
    int rows = info->enemy->attack % 10 - 1;
    int cols = info->enemy->attack / 10 - 1;
    if (info->player->map[rows][cols] == '.'
    || info->player->map[rows][cols] == 'o') {
        info->player->map[rows][cols] = 'o';
        kill(info->enemy->pid, SIGUSR2);
        my_printf("%c%c: missed\n\n", cols + 'A', rows + '1');
    } else {
        if (info->player->map[rows][cols] != 'x')
            info->player->hit++;
        info->player->map[rows][cols] = 'x';
        kill(info->enemy->pid, SIGUSR1);
        my_printf("%c%c: hit\n\n", cols + 'A', rows + '1');
    }
}

void check_response_attack_boat(t_game *info)
{
    int rows = info->player->attack % 10 - 1;
    int cols = info->player->attack / 10 - 1;
    if (info_handler == SIGUSR1) {
        if (info->enemy->map[rows][cols] != 'x') {
            info->enemy->hit++;
            my_printf("%c%c: hit\n\n", cols + 'A', rows + '1');
        } else {
            my_printf("%c%c: missed\n\n", cols + 'A', rows + '1');
        }
        info->enemy->map[rows][cols] = 'x';
    } else if (info_handler == SIGUSR2) {
        info->enemy->map[rows][cols] = 'o';
        my_printf("%c%c: missed\n\n", cols + 'A', rows + '1');
    }
}
