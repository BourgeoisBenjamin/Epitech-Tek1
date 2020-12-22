/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** main
*/

#include <header.h>

typedef struct s_info
{
    int lol;
    char k;
    char str[40];
} t_info;

int main(void)
{
    t_info *lol = malloc(sizeof(t_info));
    if (lol == NULL)
        return (84);
    int fd = open("one-structure.yolo", O_CREAT | O_RDWR | O_TRUNC, 0664);
    if (fd == -1)
        return (84);
    lol->lol = 192837;
    lol->k = 'k';
    strcpy(lol->str, "Corewar is swag!!");
    if ((write(fd, lol, sizeof(*lol))) == -1) {
        close(fd);
        return (84);
    }
    close(fd);
    return (0);
}
