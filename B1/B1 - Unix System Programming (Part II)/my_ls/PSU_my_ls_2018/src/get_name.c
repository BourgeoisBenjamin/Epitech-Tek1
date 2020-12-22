/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** get_name
*/

#include <my_ls.h>

void get_name(t_info *file, char *pathname)
{
    for (int i = 0; pathname[i]; i++) {
        if (pathname[i] == '/')
            return;
    }
    my_strcpy(file->name, pathname);
}