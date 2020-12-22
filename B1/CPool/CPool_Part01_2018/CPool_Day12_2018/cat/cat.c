/*
** EPITECH PROJECT, 2018
** cat.c
** File description:
** Task01 of Pool Day 12
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <my.h>
#include <errno.h>

int my_print_error(char *argv)
{
    if (errno == EISDIR) {
        write(2, argv, my_strlen(argv));
        write(2, ":", 1);
        write(2, " Is a directory\n", 16);
        return 84;
    } else if (errno == ENOENT) {
        write(2, argv, my_strlen(argv));
        write(2, ":", 1);
        write(2, " No such file or directory\n", 28);
        return 84;
    }
    return 0;
}

void cat_loop(void)
{
    int buffer[80];
    int size;

    size = read(0, buffer, 79);
    while (1) {
        write(1, buffer, size);
        size = read(0, buffer, 80);
    }
}

void read_write_file(int argc, char **argv)
{
    int fd;
    char buffer[20];
    int size;

    for (int i = 1; i < argc; i++) {
       fd = open(argv[i], O_RDONLY);
       if (fd == -1) {
           my_print_error(argv[i]);
       }
       size = read(fd, buffer, 19);
       if (size == -1) {
           my_print_error(argv[i]);
       }
       while (size > 0) {
           write(1, buffer, size);
           size = read(fd, buffer, 19);
       }
       close(fd);
    }
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        cat_loop();
    } else {
        read_write_file(argc, argv);
    }
    return 0;
}
