/*
** EPITECH PROJECT, 2018
** my_ls
** File description:
** list function
*/

#include <my_ls.h>

t_list *t_listnew(void)
{
    t_list *new = malloc(sizeof(t_list));
    if (new != NULL) {
        new->length = 0;
        new->start = NULL;
        new->end = NULL;
    }
    return new;
}

t_list *t_list_append(t_list *list, t_info *file)
{
    file->next = NULL;
    if (list->end == NULL) {
        file->prev = NULL;
        list->start = file;
        list->end = file;
    } else {
        list->end->next = file;
        file->prev = list->end;
        list->end = file;
    }
    list->length++;
    return list;
}

t_list *t_list_prepend(t_list *list, t_info *file)
{
    file->prev = NULL;
    if (list->end == NULL) {
        file->next = NULL;
        list->start = file;
        list->end = file;
    } else {
        list->start->prev = file;
        file->next = list->start;
        list->start = file;
    }
    list->length++;
    return list;
}

void t_list_delete(t_list **list)
{
    if (*list != NULL) {
        t_info *temp = (*list)->start;
        while (temp != NULL) {
            t_info *del = temp;
            temp = temp->next;
            free(del);
        }
        free(*list);
    }
}

void t_list_swap_elem(t_info *file, t_info *file2)
{
    struct dirent *dp = file->dp;
    struct stat info = file->info;
    struct passwd *pwd = file->pwd;
    struct group *gr = file->gr;
    char name[PATH_MAX];
    my_strcpy(name, file->name);
    file->dp = file2->dp;
    file->info = file2->info;
    file->pwd = file2->pwd;
    file->gr = file2->gr;
    my_strcpy(file->name, file2->name);
    file2->dp = dp;
    file2->info = info;
    file2->pwd = pwd;
    file2->gr = gr;
    my_strcpy(file2->name, name);
}