/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** Header
*/

#ifndef CIPHER_H
#define CIPHER_H

#include <my.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct s_data {
    char *msg;
    char *key;
    int instance;
} t_data;

typedef struct s_encryption {
    int matrix_size_key;
    int matrix_size_msg;
    int **key;
    int **msg_int;
    int **encrypted_msg;
} t_encryption;

typedef struct s_decryption {
    int matrix_size_key;
    int matrix_size_msg;
    double det;
    int **msg_int;
    double **key;
    int **msg_decrypted;
} t_decryption;

/* DISPLAY USAGE */
void display_usage(void);

/* CHECK_DATA */
int check_data(int argc, char **argv);

/* ENCRYPTION */
int encryption(t_data *data);
void display_encrypted_msg(t_encryption *encryption);

/* SET_FT_ENCRYPTION */
int set_matrix_key(t_data *data, t_encryption *encryption);
int set_matrix_msg(t_data *data, t_encryption *encryption);
int set_matrix_size_key(t_data *data, t_encryption *matrix);
int set_matrix_size_msg(t_data *data, t_encryption *matrix);
int set_encrypted_msg(t_encryption *encryption);

/* MALLOC_FT */
int **malloc_int_array(int rows, int cols);
double **malloc_double_array(int rows, int cols);

/* UTILS_FT */
void free_all_encryption(t_data *data, t_encryption *encryption);
void free_int_array(int **array, int rows);
void free_double_array(double **array, int rows);
void free_all_decryption(t_data *data, t_decryption *decryption);

/* DECRYPTION */
int decryption(t_data *data);

/* DECRYPTION_OPTION */
int set_decrypted_msg(t_decryption *decryption);
int decrypt_1(t_decryption *decryption);
int decrypt_2(t_decryption *decryption);
int decrypt_3(t_decryption *decryption);

/* SET_FT_DECRYPT */
int set_matrix_size_key_decrypt(t_data *data, t_decryption *decryption);
int set_matrix_key_decrypt(t_data *data, t_decryption *decryption);
int set_matrix_size_msg_decrypt(t_data *data, t_decryption *decryption);
int set_matrix_msg_decrypt(t_data *data, t_decryption *decryption);
void display_decrypted_msg(t_decryption *decryption);

#endif
