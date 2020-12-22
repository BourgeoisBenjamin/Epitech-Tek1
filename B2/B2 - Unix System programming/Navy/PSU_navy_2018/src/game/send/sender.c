/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** Sender function
*/

#include "navy.h"

void sender(int to_send, int pid_enemy)
{
    for (int i = 0; i < 32; i++) {
        usleep(500);
        if (to_send & (1 << i)) {
            kill(pid_enemy, SIGUSR1);
        } else {
            kill(pid_enemy, SIGUSR2);
        }
    }
}
