/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** get_dir
*/

#include <my_ls.h>

void get_new_path(char *newpath, char *pathname, struct dirent *dp)
{
    my_strcpy(newpath, pathname);
    my_strcat(newpath, "/");
    my_strcat(newpath, dp->d_name);
}

int read_in_dir(t_list *list, char *pathname, t_flag *flag, DIR *dir)
{
    struct dirent *dp = NULL;
    char newpath[PATH_MAX];
    while ((dp = readdir(dir)) != NULL) {
        t_info *file;
        if (dp->d_name[0] == '.')
            continue;
        get_new_path(newpath, pathname, dp);
        if (flag->fR && dp->d_type == DT_DIR) {
            if (my_ls(newpath, flag) != 0)
                return 1;
        }
        file = get_files(newpath);
        if (file == NULL)
            return 1;
        file->dp = dp;
        my_strcpy(file->name, dp->d_name);
        t_list_append(list, file);
    }
    return 0;
}

int get_dir(t_list *list, char *pathname, t_flag *flag)
{
    DIR *dir = opendir(pathname);
    if (dir == NULL) {
        perror("opendir");
        t_list_delete(&list);
        closedir(dir);
        return 1;
    }
    if (read_in_dir(list, pathname, flag, dir) != 0) {
        closedir(dir);
        return 1;
    }
    closedir(dir);
    return 0;
}