/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** decryption_option
*/

#include <cipher.h>

int set_decrypted_msg(t_decryption *decryption)
{
    switch (decryption->matrix_size_key) {
        case 1:
            decrypt_1(decryption);
            break;
        case 2:
            decrypt_2(decryption);
            break;
        case 3:
            decrypt_3(decryption);
            break;
        default:
            exit(0);
            break;
    }
    return 0;
}

int decrypt_1(t_decryption *decryption)
{
    decryption->msg_decrypted = malloc_int_array(decryption->matrix_size_msg, decryption->matrix_size_key);
    decryption->key[0][0] = 1 / decryption->key[0][0];

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            decryption->msg_decrypted[i][j] = decryption->msg_int[i][j] * decryption->key[0][0];
        }
    }
    return 0;
}

int decrypt_2(t_decryption *decryption)
{
    decryption->det = decryption->key[0][0] * decryption->key[1][1] - decryption->key[0][1] * decryption->key[1][0];

    if (decryption->det == 0)
        exit(0);

    double det_inv = (1 / decryption->det);
    double a = decryption->key[0][0];

    decryption->key[0][0] = decryption->key[1][1] * det_inv;
    decryption->key[0][1] = -decryption->key[0][1] * det_inv;
    decryption->key[1][0] = -decryption->key[1][0] * det_inv;
    decryption->key[1][1] = a * det_inv;

    decryption->msg_decrypted = malloc_int_array(decryption->matrix_size_msg, decryption->matrix_size_key);

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            for (int k = 0; k < decryption->matrix_size_key; k++) {
                decryption->msg_decrypted[i][j] += round(decryption->msg_int[i][k] * decryption->key[k][j]);
            }
        }
    }
    return 0;
}

int decrypt_3(t_decryption *decryption)
{
    decryption->det = decryption->key[0][0] * (decryption->key[1][1] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][1]) - decryption->key[0][1] * (decryption->key[1][0] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][0]) + decryption->key[0][2] * (decryption->key[1][0] * decryption->key[2][1] - decryption->key[1][1] * decryption->key[2][0]);
    double **com = malloc_double_array(decryption->matrix_size_key, decryption->matrix_size_key);
    double **tcom = malloc_double_array(decryption->matrix_size_key, decryption->matrix_size_key);

    com[0][0] = decryption->key[1][1] * decryption->key[2][2] - decryption->key[2][1] * decryption->key[1][2];
    com[0][1] = -(decryption->key[1][0] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][0]);
    com[0][2] = decryption->key[1][0] * decryption->key[2][1] - decryption->key[1][1] * decryption->key[2][0];
    com[1][0] = -(decryption->key[0][1] * decryption->key[2][2] - decryption->key[0][2] * decryption->key[2][1]);
    com[1][1] = decryption->key[0][0] * decryption->key[2][2] - decryption->key[0][2] * decryption->key[2][0];
    com[1][2] = -(decryption->key[0][0] * decryption->key[2][1] - decryption->key[0][1] * decryption->key[2][0]);
    com[2][0] = decryption->key[0][1] * decryption->key[1][2] - decryption->key[0][2] * decryption->key[1][1];
    com[2][1] = -(decryption->key[0][0] * decryption->key[1][2] - decryption->key[1][0] * decryption->key[0][2]);
    com[2][2] = decryption->key[0][0] * decryption->key[1][1] - decryption->key[0][1] * decryption->key[1][0];

    tcom[0][0] = com[0][0];
    tcom[1][0] = com[0][1];
    tcom[2][0] = com[0][2];
    tcom[0][1] = com[1][0];
    tcom[1][1] = com[1][1];
    tcom[2][1] = com[1][2];
    tcom[0][2] = com[2][0];
    tcom[1][2] = com[2][1];
    tcom[2][2] = com[2][2];

    decryption->key[0][0] = (1 / decryption->det) * tcom[0][0];
    decryption->key[0][1] = (1 / decryption->det) * tcom[0][1];
    decryption->key[0][2] = (1 / decryption->det) * tcom[0][2];
    decryption->key[1][0] = (1 / decryption->det) * tcom[1][0];
    decryption->key[1][1] = (1 / decryption->det) * tcom[1][1];
    decryption->key[1][2] = (1 / decryption->det) * tcom[1][2];
    decryption->key[2][0] = (1 / decryption->det) * tcom[2][0];
    decryption->key[2][1] = (1 / decryption->det) * tcom[2][1];
    decryption->key[2][2] = (1 / decryption->det) * tcom[2][2];

    decryption->msg_decrypted = malloc_int_array(decryption->matrix_size_msg, decryption->matrix_size_key);
    double **temp = malloc_double_array(decryption->matrix_size_msg, decryption->matrix_size_key);

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            for (int k = 0; k < decryption->matrix_size_key; k++) {
                temp[i][j] += decryption->msg_int[i][k] * decryption->key[k][j];
            }
        }
    }

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            decryption->msg_decrypted[i][j] = round(temp[i][j]);
        }
    }
    free(com);
    free(tcom);
    return 0;
}

int decrypt_4(t_decryption *decryption)
{
    decryption->det = decryption->key[0][0] * (decryption->key[1][1] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][1]) - decryption->key[0][1] * (decryption->key[1][0] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][0]) + decryption->key[0][2] * (decryption->key[1][0] * decryption->key[2][1] - decryption->key[1][1] * decryption->key[2][0]);
    double **com = malloc_double_array(decryption->matrix_size_key, decryption->matrix_size_key);
    double **tcom = malloc_double_array(decryption->matrix_size_key, decryption->matrix_size_key);

    com[0][0] = decryption->key[1][1] * decryption->key[2][2] - decryption->key[2][1] * decryption->key[1][2];
    com[0][1] = -(decryption->key[1][0] * decryption->key[2][2] - decryption->key[1][2] * decryption->key[2][0]);
    com[0][2] = decryption->key[1][0] * decryption->key[2][1] - decryption->key[1][1] * decryption->key[2][0];
    com[1][0] = -(decryption->key[0][1] * decryption->key[2][2] - decryption->key[0][2] * decryption->key[2][1]);
    com[1][1] = decryption->key[0][0] * decryption->key[2][2] - decryption->key[0][2] * decryption->key[2][0];
    com[1][2] = -(decryption->key[0][0] * decryption->key[2][1] - decryption->key[0][1] * decryption->key[2][0]);
    com[2][0] = decryption->key[0][1] * decryption->key[1][2] - decryption->key[0][2] * decryption->key[1][1];
    com[2][1] = -(decryption->key[0][0] * decryption->key[1][2] - decryption->key[1][0] * decryption->key[0][2]);
    com[2][2] = decryption->key[0][0] * decryption->key[1][1] - decryption->key[0][1] * decryption->key[1][0];

    tcom[0][0] = com[0][0];
    tcom[1][0] = com[0][1];
    tcom[2][0] = com[0][2];
    tcom[0][1] = com[1][0];
    tcom[1][1] = com[1][1];
    tcom[2][1] = com[1][2];
    tcom[0][2] = com[2][0];
    tcom[1][2] = com[2][1];
    tcom[2][2] = com[2][2];

    decryption->key[0][0] = (1 / decryption->det) * tcom[0][0];
    decryption->key[0][1] = (1 / decryption->det) * tcom[0][1];
    decryption->key[0][2] = (1 / decryption->det) * tcom[0][2];
    decryption->key[1][0] = (1 / decryption->det) * tcom[1][0];
    decryption->key[1][1] = (1 / decryption->det) * tcom[1][1];
    decryption->key[1][2] = (1 / decryption->det) * tcom[1][2];
    decryption->key[2][0] = (1 / decryption->det) * tcom[2][0];
    decryption->key[2][1] = (1 / decryption->det) * tcom[2][1];
    decryption->key[2][2] = (1 / decryption->det) * tcom[2][2];

    decryption->msg_decrypted = malloc_int_array(decryption->matrix_size_msg, decryption->matrix_size_key);
    double **temp = malloc_double_array(decryption->matrix_size_msg, decryption->matrix_size_key);

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            for (int k = 0; k < decryption->matrix_size_key; k++) {
                temp[i][j] += decryption->msg_int[i][k] * decryption->key[k][j];
            }
        }
    }

    for (int i = 0; i < decryption->matrix_size_msg; i++) {
        for (int j = 0; j < decryption->matrix_size_key; j++) {
            decryption->msg_decrypted[i][j] = round(temp[i][j]);
        }
    }
    free(com);
    free(tcom);
    return 0;
}