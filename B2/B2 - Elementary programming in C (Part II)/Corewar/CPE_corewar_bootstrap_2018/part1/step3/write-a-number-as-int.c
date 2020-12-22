/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>

int main(void)
{
    int fd = open("number-as-int.yolo", O_CREAT | O_RDWR | O_TRUNC, 0664);
    int lol = 12345678;
    if (fd == -1)
        return (84);
    if ((write(fd, &lol, sizeof(lol))) == -1) {
        close(fd);
        return (84);
    }
    close(fd);
    return (0);
}
