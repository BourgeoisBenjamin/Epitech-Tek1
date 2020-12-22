/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** sort_time
*/

#include <my_ls.h>

int my_strcmp_time(int time1, int time2)
{
    if (time1 < time2)
        return 1;
    else if (time1 > time2)
        return -1;
    else
        return 0;
}

int sort_untime(t_info *file, t_info *file2)
{
    if (my_strcmp_time(file->info.st_mtime, file2->info.st_mtime) == -1) {
        t_list_swap_elem(file, file2);
        return 1;
    }
    return 0;
}

int sort_time(t_info *file, t_info *file2)
{
    if (my_strcmp_time(file->info.st_mtime, file2->info.st_mtime) == 1) {
        t_list_swap_elem(file, file2);
        return 1;
    }
    return 0;
}

void t_list_sort_time(t_list *list, t_flag *flag)
{
    int sort = 1;
    t_info *temp = list->start;
    if (list->start == NULL)
        return;

    while (sort > 0) {
        sort = 0;
        temp = list->start;
        while (temp->next) {
            if (flag->ft && flag->fr)
                sort += sort_untime(temp, temp->next);
            else if (flag->ft && !flag->fr)
                sort += sort_time(temp, temp->next);
            temp = temp->next;
        }
    }
}