/*
 ** EPITECH PROJECT, 2019
 ** NAVY - Bootstrap
 ** File description:
 ** who_sig_me
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

int my_getnbr(char const *str)
{
    int number = 0;
    int neg = 1;
    int i = 0;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            neg = neg * -1;
    }
    for (int j = i; '0' <= str[j] && str[j] <= '9'; j++) {
        number = number * 10;
        number = number + str[j] - 48;
    }
    return (number * neg);
}

static void my_handler(int sig, siginfo_t *siginfo, void *context)
{
    printf("Signal %s received from %i\n", strsignal(sig), siginfo->si_pid);
}

int who_sig_me(int sig1, int sig2)
{
    struct sigaction act;

    act.sa_sigaction = &my_handler;
    act.sa_flags = SA_SIGINFO;

    if (sigaction(sig1, &act, NULL) < 0 || sigaction(sig2, &act, NULL) < 0) {
        printf("Unable to handle Killed signal\n");
    }
    while (1);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return 84;
    setbuf(stdout, NULL);
    who_sig_me(my_getnbr(argv[1]), my_getnbr(argv[2]));
    return 0;
}
