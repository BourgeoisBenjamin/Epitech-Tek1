/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** get_files
*/

#include <my_ls.h>

t_info *get_files(char *pathname)
{
    t_info *file = malloc(sizeof(t_info));
    if (file == NULL || lstat(pathname, &file->info) == -1) {
        free(file);
        return NULL;
    }
    file->pwd = getpwuid(file->info.st_uid);
    file->gr = getgrgid(file->info.st_gid);
    if (file->pwd == NULL || file->gr == NULL) {
        perror("getpwuid or getgrgid :");
        return NULL;
    }
    return file;
}