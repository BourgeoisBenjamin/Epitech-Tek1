/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** display
*/

#include <my_ls.h>

void display(t_list *list, t_flag *flag)
{
    t_list_sort_alpha(list, flag);
    t_list_sort_time(list, flag);
    if (list->length > 0 || flag->fR) {
        my_printf("%s:\n", list->name);
    }
    if (flag->fl) {
        display_l(list);
        my_printf("\n");
        t_list_delete(&list);
        return;
    }
    t_info *temp = list->start;
    for (int i = 0; i < list->length; i++) {
        my_printf("%s\n", temp->name);
        temp = temp->next;
    }
    my_printf("\n");
    t_list_delete(&list);
}