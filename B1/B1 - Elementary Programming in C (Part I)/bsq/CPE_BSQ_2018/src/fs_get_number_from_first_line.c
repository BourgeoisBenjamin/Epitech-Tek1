/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** get_number_from_first_line.c
*/

#include <bsq.h>

int fs_get_number_from_first_line(int fd)
{
    char buffer[50];
    char *number = malloc(sizeof(char) * (50 + 1));
    int size = read(fd, buffer, 50);

    if (size == -1) {
        my_puterror("read failed\n");
        exit(84);
    }
    for (int i = 0; buffer[i] != '\n'; i++) {
        number[i] = buffer[i];
        number[i + 1] = '\0';
    }
    for (int i = 0; number[i] != '\0'; i++) {
        if (number[0] <= 0 && number[0] > 9) {
            my_puterror("Invalid File. Only number of line on the first line");
            exit(84);
        }
    }
    return my_getnbr(number);
}
