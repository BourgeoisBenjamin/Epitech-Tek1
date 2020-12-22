/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** is_tunnel
*/

#include <lemin.h>

int is_tunnel(char *buffer)
{
    int score = 0;
    int hashtag = 0;
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '#' && score != 0)
            hashtag++;
        if (buffer[i] == '-' && hashtag == 0)
            score++;
    }
    if (score != 1)
        return (0);
    return (1);
}
