/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** display
*/

#include <my_ls.h>

void display_type(t_info *file)
{
    switch (file->info.st_mode & S_IFMT) {
        case S_IFBLK:
            my_putchar('b');
            break;
        case S_IFCHR:
            my_putchar('c');
            break;
        case S_IFDIR:
            my_putchar('d');
            break;
        case S_IFLNK:
            my_putchar('l');
            break;
        default:
            my_putchar('-');
            break;
    }
}

void display_right(t_info *file)
{
    display_type(file);
    my_putchar((file->info.st_mode & S_IRUSR) ? 'r' : '-');
    my_putchar((file->info.st_mode & S_IWUSR) ? 'w' : '-');
    my_putchar((file->info.st_mode & S_IXUSR) ? 'x' : '-');
    my_putchar((file->info.st_mode & S_IRGRP) ? 'r' : '-');
    my_putchar((file->info.st_mode & S_IWGRP) ? 'w' : '-');
    my_putchar((file->info.st_mode & S_IXGRP) ? 'x' : '-');
    my_putchar((file->info.st_mode & S_IROTH) ? 'r' : '-');
    my_putchar((file->info.st_mode & S_IWOTH) ? 'w' : '-');
    if (file->info.st_mode & S_ISVTX)
        my_putchar((file->info.st_mode & S_IXOTH) ? 't' : 'T');
    else
        my_putchar((file->info.st_mode & S_IXOTH) ? 'x' : '-');
    my_putchar('.');
    my_putchar(' ');
}

void display_time(t_info *file)
{
    char *date = ctime(&file->info.st_mtime);

    for (int j = 4; j < 16; j++) {
        my_putchar(date[j]);
    }
}

int display_total(t_list *list)
{
    int total = 0;
    for (t_info *temp = list->start; temp; temp = temp->next) {
        total += temp->info.st_blocks;
    }
    return total / 2;
}

void display_l(t_list *list)
{
    my_printf("total %i\n", display_total(list));
    t_info *temp = list->start;

    for (int i = 0; i < list->length; i++) {
        display_right(temp);
        my_printf("%i ", temp->info.st_nlink);
        my_printf("%s ", temp->pwd->pw_name);
        my_printf("%s ", temp->gr->gr_name);
        display_major_or_size(temp->info);
        display_time(temp);
        my_printf(" %s\n", temp->name);
        temp = temp->next;
    }
    return;
}