/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** set_ft_decryption
*/

#include <cipher.h>

int set_matrix_size_key_decrypt(t_data *data, t_decryption *decryption)
{
    int len = strlen(data->key);

    for (int i = 0; ;i++) {
        if (len <= pow(i, 2)) {
            decryption->matrix_size_key = i;
            return 0;
        }
    }
}

int set_matrix_key_decrypt(t_data *data, t_decryption *decryption)
{
    decryption->key = malloc_double_array(decryption->matrix_size_key, decryption->matrix_size_key);
    size_t k = 0;

    for (int i = 0; i < decryption->matrix_size_key; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            decryption->key[i][j] = data->key[k];
            if (k < strlen(data->key))
                k++;
        }
    }
    return 0;
}

int set_matrix_size_msg_decrypt(t_data *data, t_decryption *decryption)
{
    int space = 1;
    for (size_t i = 0; i < strlen(data->msg); i++) {
        if (data->msg[i] == ' ') {
            space++;
        }
    }
    decryption->matrix_size_msg = space / decryption->matrix_size_key;

    return 0;
}

int set_matrix_msg_decrypt(t_data *data, t_decryption *decryption)
{
    decryption->msg_int = malloc_int_array(decryption->matrix_size_msg, decryption->matrix_size_key);

    int temp = 0;
    int k = 0;
    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key;) {
            if (data->msg[k] == ' ' || data->msg[k] == '\0') {
                decryption->msg_int[i][j] = temp;
                k++;
                temp = 0;
                j++;
            }
            temp = temp * 10;
            temp += data->msg[k] - '0';
            k++;
        }
    }
    return 0;
}

void display_decrypted_msg(t_decryption *decryption)
{
    printf("Key matrix:\n");

    for (int i = 0; i < decryption->matrix_size_key; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            printf("%f", decryption->key[i][j]);
            if (j < decryption->matrix_size_key - 1)
            printf("\t");
        }
        printf("\n");
    }

    printf("\nDecrypted message:\n");

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            if (decryption->msg_decrypted[i][j] != 0) {
                printf("%c", decryption->msg_decrypted[i][j]);
            }
        }
    }
    printf("\n");
}