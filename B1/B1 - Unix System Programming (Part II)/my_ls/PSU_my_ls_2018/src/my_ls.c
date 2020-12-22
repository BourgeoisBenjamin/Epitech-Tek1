/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** my_ls
*/

#include <my_ls.h>

int my_ls(char *pathname, t_flag *flag)
{
    t_list *list = t_listnew();
    struct stat info;
    if (list == NULL || lstat(pathname, &info) == -1) {
        t_list_delete(&list);
        return 1;
    }
    t_info *file = NULL;
    my_strcpy(list->name, pathname);
    if (files_or_dir(info) == DIRECTORY) {
        if (get_dir(list, pathname, flag))
            return 1;
    } else if (files_or_dir(info) == FILE) {
        file = get_files(pathname);
        if (file == NULL)
            return 1;
        get_name(file, pathname);
        t_list_append(list, file);
    }
    display(list, flag);
    return 0;
}

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