/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** decryption
*/

#include <cipher.h>

int decryption(t_data *data)
{
    t_decryption *decryption = malloc(sizeof(t_decryption));

    if (decryption == NULL)
        exit(84);

    set_matrix_size_key_decrypt(data, decryption);
    set_matrix_key_decrypt(data, decryption);

    set_matrix_size_msg_decrypt(data, decryption);
    set_matrix_msg_decrypt(data, decryption);

    set_decrypted_msg(decryption);
    display_decrypted_msg(decryption);

    free_all_decryption(data, decryption);

    return 0;
}