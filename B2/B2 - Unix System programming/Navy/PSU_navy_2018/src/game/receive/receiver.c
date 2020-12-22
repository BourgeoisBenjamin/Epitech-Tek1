/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Receive function
*/

#include "navy.h"

void receiver_handler(int sig, siginfo_t *siginfo, void *context)
{
    (void)siginfo;
    (void)context;
    if (sig == SIGUSR1)
        info_handler = SIGUSR1;
    else if (sig == SIGUSR2)
        info_handler = SIGUSR2;
}

void receiver(t_game *info)
{
    int received = 0;
    info->enemy->attack = 0;
    while (received < 32) {
        pause();
        if (info_handler == SIGUSR1) {
            info->enemy->attack = info->enemy->attack | (1 << received);
            received++;
        } else if (info_handler == SIGUSR2) {
            info->enemy->attack = info->enemy->attack & ~ (1 << received);
            received++;
        }
    }
}
