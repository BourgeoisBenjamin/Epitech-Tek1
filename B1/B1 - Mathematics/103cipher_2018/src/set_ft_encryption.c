/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** set_ft_encryption
*/

#include <cipher.h>

int set_matrix_key(t_data *data, t_encryption *encryption)
{
    encryption->key = malloc_int_array(encryption->matrix_size_key, encryption->matrix_size_key);
    size_t k = 0;

    for (int i = 0; i < encryption->matrix_size_key; i++) {
        for (int j = 0; j < encryption->matrix_size_key; j++) {
            encryption->key[i][j] = data->key[k];
            if (k < strlen(data->key))
                k++;
        }
    }
    return 0;
}

int set_matrix_msg(t_data *data, t_encryption *encryption)
{
    encryption->msg_int = malloc_int_array(encryption->matrix_size_msg, encryption->matrix_size_key);
    size_t k = 0;

    for (int i = 0; i < encryption->matrix_size_msg; i++) {
        for (int j = 0; j < encryption->matrix_size_key; j++) {
            encryption->msg_int[i][j] = data->msg[k];
            if (k < strlen(data->msg))
                k++;
        }
    }
    return 0;
}

int set_matrix_size_key(t_data *data, t_encryption *encryption)
{
    int len = strlen(data->key);

    for (int i = 0; ;i++) {
        if (len <= pow(i, 2)) {
            encryption->matrix_size_key = i;
            return 0;
        }
    }
}

int set_matrix_size_msg(t_data *data, t_encryption *encryption)
{
    int len = strlen(data->msg);

    if (len % encryption->matrix_size_key != 0) {
        encryption->matrix_size_msg = len / encryption->matrix_size_key + 1;
    } else {
        encryption->matrix_size_msg = len / encryption->matrix_size_key;
    }
    return 0;
}

int set_encrypted_msg(t_encryption *encryption)
{
    encryption->encrypted_msg = malloc_int_array(encryption->matrix_size_msg, encryption->matrix_size_key);

    for (int i = 0; i < encryption->matrix_size_msg; i++) {
        for (int j = 0; j < encryption->matrix_size_key; j++) {
            for (int k = 0; k < encryption->matrix_size_key; k++) {
                encryption->encrypted_msg[i][j] += encryption->msg_int[i][k] * encryption->key[k][j];
            }
        }
    }
    return 0;
}