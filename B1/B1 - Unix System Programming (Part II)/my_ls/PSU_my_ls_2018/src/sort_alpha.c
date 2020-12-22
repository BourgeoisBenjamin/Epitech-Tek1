/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** sort_alpha
*/

#include <my_ls.h>

int my_strcmp_uncap(char const *s1, char const *s2)
{
    int cap1 = 0;
    int cap2 = 0;

    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            cap1 = 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            cap2 = 32;
        if (s1[i] + cap1 > s2[i] + cap2) {
            return 1;
        } else if (s1[i] + cap1 < s2[i] + cap2) {
            return -1;
        }
        cap1 = 0;
        cap2 = 0;
    }
    return 0;
}

int sort_unalpha(t_info *file, t_info *file2)
{
    if (my_strcmp_uncap(file->name, file2->name) == -1) {
        t_list_swap_elem(file, file2);
        return 1;
    }
    return 0;
}

int sort_alpha(t_info *file, t_info *file2)
{
    if (my_strcmp_uncap(file->name, file2->name) == 1) {
        t_list_swap_elem(file, file2);
        return 1;
    }
    return 0;
}

void t_list_sort_alpha(t_list *list, t_flag *flag)
{
    int sort = 1;
    t_info *temp = list->start;
    if (list->start == NULL)
        return;

    while (sort > 0) {
        sort = 0;
        temp = list->start;
        while (temp->next) {
            if (flag->fr)
                sort += sort_unalpha(temp, temp->next);
            else
                sort += sort_alpha(temp, temp->next);
            temp = temp->next;
        }
    }
}