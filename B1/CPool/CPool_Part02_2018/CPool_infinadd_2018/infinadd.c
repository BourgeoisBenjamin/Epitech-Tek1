/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Infinadd Project 2018
*/

#include <my.h>
#include <stdlib.h>

int error_malloc(char *result);

void prepare_number(char *s1, char *s2, char *result, int max_len)
{
    int count = 1;
    if (s1[0] == '-' && s2[0] == '-') {
        while (s1[count] != '\0') {
            s1[count] = s1[count + 1];
            count++;
        }
        count = 1;
        while (s2[count] != '\0') {
            s2[count] = s2[count + 1];
            count++;
        }
        //result[max_len] = '-';
    }
}

char* infinadd(char *s1, char *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    int max_len = (len1 >= len2) ? (len1) : (len2);
    int min_len = (len1 <= len2) ? (len1) : (len2);
    char *result = malloc(sizeof(char) * (max_len + 1));
    int retain = 0;
    int temp;
    int i = 0;

    error_malloc(result);

    prepare_number(s1, s2, result, max_len);
    
    for (i = 0; i < min_len; i++)
    {
        temp = ((s1[len1 - 1] - '0') + (s2[len2 - 1] - '0') + retain) % 10;
        result[i] = temp + '0';
        retain = ((s1[len1 - 1] - '0') + (s2[len2 - 1] - '0') + retain) / 10;
        if (len1 == len2 && retain != 0)
            result[i + 1] = retain + '0';
        len1--;
        len2--;
    }

    if (min_len == my_strlen(s1)) {
        while (i < max_len) {
            temp = ((s2[len2 - 1] - '0') + retain) % 10;
            result[i] = temp + '0';
            retain = ((s2[len2 - 1] - '0') + retain) / 10;
            len2--;
            i++;
        }
    }
    if (min_len == my_strlen(s2)) {
        while (i < max_len) {
            temp = ((s1[len1 - 1] - '0') + retain) % 10;
            result[i] = temp + '0';
            retain = ((s1[len1 - 1] - '0') + retain) / 10;
            len1--;
            i++;
        }
    }
    result[i + 1] = '\0';
    my_revstr(result);
    my_putstr(result);
    return result;
}

int error_malloc(char *result)
{
    if (result == NULL) {
        my_putstr("Error memory");
        return 84;
    }
    return 0;
}
