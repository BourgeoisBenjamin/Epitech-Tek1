/*
 ** EPITECH PROJECT, 2019
 ** NAVY - Bootstrap
 ** File description:
 ** kill_it
 */

 #include <sys/types.h>
 #include <signal.h>

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

void kill_it(int pid)
{
    kill(pid, SIGQUIT);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;

    kill_it(my_getnbr(argv[1]));

    return 0;
}
