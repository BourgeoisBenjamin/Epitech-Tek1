/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Game maine function
*/

#include "navy.h"

void game_server(t_game *info)
{
    while (info->player->hit < 14 && info->enemy->hit < 14) {
        display_map(info->player->map, info->enemy->map);
        info->player->attack = get_attack();
        if (info->player->attack == -1)
            return;
        sender(info->player->attack, info->enemy->pid);
        pause();
        check_response_attack_boat(info);
        if (info->player->hit >= 14 || info->enemy->hit >= 14)
            return;
        my_printf("waiting for enemy's attack...\n");
        receiver(info);
        check_attack_boat(info);
    }
    display_map(info->player->map, info->enemy->map);
}

void game_client(t_game *info)
{
    while (info->player->hit < 14 && info->enemy->hit < 14) {
        display_map(info->player->map, info->enemy->map);
        my_printf("waiting for enemy's attack...\n");
        receiver(info);
        check_attack_boat(info);
        if (info->player->hit >= 14 || info->enemy->hit >= 14)
            return;
        info->player->attack = get_attack();
        if (info->player->attack == -1)
            return;
        sender(info->player->attack, info->enemy->pid);
        pause();
        check_response_attack_boat(info);
    }
    display_map(info->player->map, info->enemy->map);
}

int check_win(int hit_player, int hit_enemy)
{
    if (hit_player >= 14) {
        my_printf("Enemy Won\n");
        return 1;
    } else if (hit_enemy >= 14){
        my_printf("I Won\n");
        return 0;
    }
    return 84;
}
