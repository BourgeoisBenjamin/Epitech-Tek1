/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** utils_ft
*/

#include <cipher.h>

void free_all_encryption(t_data *data, t_encryption *encryption)
{
    free(data);
    free_int_array(encryption->key, encryption->matrix_size_key);
    free_int_array(encryption->msg_int, encryption->matrix_size_msg);
    free_int_array(encryption->encrypted_msg, encryption->matrix_size_msg);
    free(encryption);
}

void free_int_array(int **array, int rows)
{
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}

void free_double_array(double **array, int rows)
{
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}

void free_all_decryption(t_data *data, t_decryption *decryption)
{
    free(data);
    free_int_array(decryption->msg_int, decryption->matrix_size_msg);
    free_int_array(decryption->msg_decrypted, decryption->matrix_size_msg);
    free_double_array(decryption->key, decryption->matrix_size_key);
    free(decryption);
}