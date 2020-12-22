/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** client
*/

#include "navy.h"

int get_connection(t_game *info)
{
    my_printf("my_pid: %i\n", info->player->pid);
    if (kill(info->enemy->pid, SIGUSR2) != 0) {
        my_printf("player with pid %i not found\n\n", info->enemy->pid);
        return -1;
    }
    struct sigaction act;
    my_memset(&act, 0, sizeof(act));
    act.sa_sigaction = &receiver_handler;
    act.sa_flags = SA_SIGINFO;
    my_printf("successfully connected\n\n");
    if (sigaction(SIGUSR2, &act, NULL) < 0 || sigaction(SIGUSR1, &act, NULL)) {
        my_printe("Unable to handle signal\n");
    }
    return 0;
}

int client(t_game *info)
{
    if (get_connection(info) == -1)
        return -1;
    game_client(info);
    info->win = check_win(info->player->hit, info->enemy->hit);
    return 0;
}
