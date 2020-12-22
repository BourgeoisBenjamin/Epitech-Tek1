/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>

int main(void)
{
    int fd = open("some-text.yolo", O_CREAT | O_RDWR, 0664);
    if (fd == -1)
        return (84);
    if ((write(fd, "Hello bambino\n", strlen("Hello bambino\n"))) == -1) {
        close(fd);
        return (84);
    }
    close(fd);
    return (0);
}
