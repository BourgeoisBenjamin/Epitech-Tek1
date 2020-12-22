/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** fs_get_number_from_first_line
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int my_getnbr(char const *str);
int my_put_nbr(int number);
int my_putstr(char *str);

int fs_get_number_from_first_line(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int size;
    char buffer[50];
    char *number = malloc(sizeof(char) * (50 + 1));

    if (fd == -1)
        return -1;

    size = read(fd, buffer, 50);

    if (size == -1) {
	my_putstr("read failed\n");
        return -1;
    } else if (size == 0) {
	my_putstr("read has nothing more to read\n");
        return -1;
    }

    for (int i = 0; buffer[i] != '\n'; i++) {
        number[i] = buffer[i];
        number[i + 1] = '\0';
    }

    if (number[0] <= 0 && number[0] > 9)
        return -1;

    return my_getnbr(number);
}
