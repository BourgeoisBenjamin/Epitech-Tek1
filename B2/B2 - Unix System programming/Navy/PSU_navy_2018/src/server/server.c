/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** server
*/

#include "navy.h"

void wait_connection(int sig, siginfo_t *siginfo, void *context)
{
    (void)context;
    if (sig == SIGUSR2) {
        info_handler = siginfo->si_pid;
    }
}

void init_connection(t_game *info)
{
    struct sigaction act;
    my_memset(&act, 0, sizeof(act));
    act.sa_sigaction = &wait_connection;
    act.sa_flags = SA_SIGINFO;

    if (sigaction(SIGUSR2, &act, NULL) < 0) {
        my_printe("Unable to handle signal\n");
    }
    my_printf("my_pid: %i\n", info->player->pid);
    my_printf("waiting for enemy connection...\n\n");
    while (info_handler == 0);
    info->enemy->pid = info_handler;
    act.sa_sigaction = &receiver_handler;
    my_printf("enemy connected\n\n");
    if (sigaction(SIGUSR2, &act, NULL) < 0 || sigaction(SIGUSR1, &act, NULL)) {
        my_printe("Unable to handle signal\n");
    }
}

void server(t_game *info)
{
    init_connection(info);
    game_server(info);
    info->win = check_win(info->player->hit, info->enemy->hit);
}
