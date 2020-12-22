/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** my_ls
*/

#include <my_ls.h>

int files_or_dir(struct stat info)
{
    switch (info.st_mode & S_IFMT) {
        case S_IFDIR:
            return DIRECTORY;
            break;
        default:
            return FILE;
            break;
    }
    return 0;
}