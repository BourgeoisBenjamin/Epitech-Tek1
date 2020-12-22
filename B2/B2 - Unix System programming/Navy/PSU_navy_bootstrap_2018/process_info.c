/*
 ** EPITECH PROJECT, 2019
 ** NAVY - Bootstrap
 ** File description:
 ** process_info
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void process_info()
{
    printf("PID: %i\n", getpid());
    printf("PPID: %i\n", getppid());
    printf("PGID: %i\n", getpgid(getpid()));
}

int main(void)
{
    process_info();
    return 0;
}
