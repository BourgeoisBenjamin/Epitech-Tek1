/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** load_file_in_mem
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int my_putstr(char const *str);

char *add_file_in_meme(char const *filepath, int len)
{
    char buffer[len];
    int size = 0;
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;
    int fd;
    
    fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        return NULL;
    }
    
    size = read(fd, buffer, len);

    if (size == -1) {
        return NULL;
    }
    
    while (buffer[i] != '\0') {
        str[i] = buffer[i];
        i++;
    }
    str[i] = '\0';
    close(fd);
    my_putstr(str);
    return str;
}

char *load_file_in_mem(char const *filepath)
{
    int fd;
    char buffer[20];
    int size;
    int len = 0;
    char *str;
    
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        return NULL;
    }
    size = read(fd, buffer, 19);
    if (size == -1) {
        return NULL;
    }
    while (size > 0) {
        len = len + size;
        size = read(fd, buffer, 19);
    }
    close(fd);
    str = add_file_in_meme(filepath, len);
}
