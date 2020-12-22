/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>

int main(void)
{
    int fd = open("several-variables.yolo", O_CREAT | O_RDWR | O_TRUNC, 0664);
    int lol = 192837;
    char k = 'k';
    char str[40] = "Corewar is swag!!";
    if (fd == -1)
        return (84);
    if ((write(fd, &lol, sizeof(lol))) == -1) {
        close(fd);
        return (84);
    }
    if ((write(fd, &k, sizeof(k))) == -1) {
        close(fd);
        return (84);
    }
    if ((write(fd, &str, sizeof(str))) == -1) {
        close(fd);
        return (84);
    }
    close(fd);
    return (0);
}
