/*
** EPITECH PROJECT, 2018
** 101pong
** File description:
** display_usage.c
*/

#include <cipher.h>

void display_usage(void)
{
    printf("USAGE\n");
    printf("        ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("        message     a message, made of ASCII characters\n");
    printf("        key         the encryption key, made of ASCII characters\n");
    printf("        flag        0 for the message to be encrypted, 1 to be decrypted\n");
}
