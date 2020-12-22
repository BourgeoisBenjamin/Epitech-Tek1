/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** main
*/

#include <cipher.h>

t_data *params_to_struct(char **argv)
{
    t_data *data = malloc(sizeof(t_data));

    if (data == NULL)
        exit(84);

    data->msg = argv[1];
    data->key = argv[2];
    data->instance = atoi(argv[3]);

    return data;
}

int main(int argc, char **argv)
{
    t_data *data;

    check_data(argc, argv);
    data = params_to_struct(argv);

    if (data->instance == 0)
        encryption(data);
    else if (data->instance == 1)
        decryption(data);
    return 0;
}