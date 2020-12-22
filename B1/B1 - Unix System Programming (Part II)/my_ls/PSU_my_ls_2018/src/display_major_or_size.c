/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** display_major_or_size
*/

#include <my_ls.h>

void display_major_or_size(struct stat info)
{
    switch (info.st_mode & S_IFMT) {
        case S_IFBLK:
            my_printf("%i, %i ", major(info.st_rdev), minor(info.st_rdev));
            break;
        case S_IFCHR:
            my_printf("%i, %i ", major(info.st_rdev), minor(info.st_rdev));
            break;
        default:
            my_printf("%i ", info.st_size);
            break;
    }
}