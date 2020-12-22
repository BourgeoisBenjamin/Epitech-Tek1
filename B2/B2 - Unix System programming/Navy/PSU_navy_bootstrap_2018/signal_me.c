/*
 ** EPITECH PROJECT, 2019
 ** NAVY - Bootstrap
 ** File description:
 ** signal_me
 */

 #include <stddef.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include <signal.h>
 #include <unistd.h>

void my_handler(int sig, siginfo_t *siginfo, void *context)
{
    static int sigusr1 = 0;
    static int sigusr2 = 0;
    if (sig == SIGUSR1) {
        sigusr1++;
    } else if (sig == SIGUSR2) {
        sigusr2++;
    } else {
        printf("SIGUSR1 : %i\nSIGUSR2 : %i\n", sigusr1, sigusr2);
        kill(getpid(), SIGKILL);
    }
}

int signal_me(void)
{
    struct sigaction act;

    act.sa_sigaction = &my_handler;
    act.sa_flags = SA_SIGINFO;

    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    sigaction(SIGQUIT, &act, NULL);

    while (1);
}

int main(void)
{
    setbuf(stdout, NULL);
    signal_me();
    return 0;
}
