/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** encryption
*/

#include <cipher.h>

int encryption(t_data *data)
{
    t_encryption *encryption = malloc(sizeof(t_encryption));

    if (encryption == NULL)
        exit(84);

    set_matrix_size_key(data, encryption);
    set_matrix_size_msg(data, encryption);

    set_matrix_key(data, encryption);
    set_matrix_msg(data, encryption);

    set_encrypted_msg(encryption);

    display_encrypted_msg(encryption);

    free_all_encryption(data, encryption);

    return 0;
}

void display_encrypted_msg(t_encryption *encryption)
{
    printf("Key matrix:\n");

    for (int i = 0; i < encryption->matrix_size_key; i++) {
        for (int j = 0; j < encryption->matrix_size_key; j++) {
        printf("%i", encryption->key[i][j]);
        if (j < encryption->matrix_size_key - 1)
            printf("\t");
        }
        printf("\n");
    }

    printf("\nEncrypted message:\n");

    for (int i = 0; i < encryption->matrix_size_msg; i++) {
        for (int j = 0; j < encryption->matrix_size_key; j++) {
            printf("%i", encryption->encrypted_msg[i][j]);
            if (i == encryption->matrix_size_msg - 1 && j == encryption->matrix_size_key - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
}