/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** check_data
*/

#include <cipher.h>

int check_data(int argc, char **argv)
{
    if (argc != 4) {
        display_usage();
        exit(84);
    }
    if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0) {
        my_puterror("No message to be encrypted or no key\n");
        exit(84);
    }
    if (atoi(argv[3]) != 0 && atoi(argv[3]) != 1) {
        my_puterror("Only 0 for encryption and 1 for decryption\n");
        exit(84);
    }
    if (atoi(argv[3]) == 1) {
        for (size_t i = 0; i < strlen(argv[1]); i++) {
            if (!('0' <= argv[1][i] && argv[1][i] <= '9') && argv[1][i] != ' ' && argv[1][i] != '-') {
                my_puterror("Only number and space in message to be decrypted\n");
                exit(84);
            }
        }
    }
    return 0;
}