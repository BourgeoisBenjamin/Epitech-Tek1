/*
** EPITECH PROJECT, 2019
** bootstrap my_ls
** File description:
** info_file
*/

#include <info_file.h>

void display_type(struct stat *info)
{
    switch (info->st_mode & S_IFMT) {
        case S_IFBLK:
            my_printf("Type: b\n");
            break;
        case S_IFCHR:
            my_printf("Type: c\n");
            break;
        case S_IFDIR:
            my_printf("Type: d\n");
            break;
        case S_IFIFO:
            my_printf("Type: p\n");
            break;
        case S_IFLNK:
            my_printf("Type: l\n");
            break;
        case S_IFREG:
            my_printf("Type: f\n");
            break;
        case S_IFSOCK:
            my_printf("Type: s\n");
            break;
        default:
            my_printf("Type: unknown\n");
            break;
    }
}

void display_name(char **argv)
{
    char *filename = argv[1];
    filename += my_strlen(filename);

    while (filename[0] != '/') {
        filename--;
    }
    filename++;
    my_printf("Name:\t%s\n", filename);
}

void display_information(struct stat *info, char **argv)
{
    display_name(argv);
    display_type(info);
    my_printf("Inode:\t%i\n", info->st_ino);
    my_printf("Hard Link:\t%i\n", info->st_nlink);
    my_printf("Size:\t%i\n", info->st_size);
    my_printf("Allocated space:\t%i\n", info->st_blocks);
    my_printf("Minor:\t%i\n", minor(info->st_rdev));
    my_printf("Major:\t%i\n", major(info->st_rdev));
    my_printf("UID:\t%i\n", info->st_uid);
    my_printf("GID:\t%i\n", info->st_gid);
}

int info_file(char **argv)
{
    struct stat *info = malloc(sizeof(info));
    if (info == NULL) {
        return 84;
    }

    if (stat(argv[1], info) == -1) {
        perror("stat");
        return 84;
    }

    display_information(info, argv);

    return 0;
}

int check_error(int argc)
{
    if (argc != 2) {
        return 84;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (check_error(argc) == 84) {
        my_puterror("USAGE : ./info_file file\n");
        return 84;
    }
    if (info_file(argv) == 84)
        return 84;

    return 0;
}