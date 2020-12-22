/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** error_exit
*/

#include <my_ls.h>

void error_exit(t_list *list)
{
    perror("lstat");
    t_list_delete(&list);
    exit(84);
}