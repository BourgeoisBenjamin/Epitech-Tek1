/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** asm
*/

#include "asm.h"

int asm_main(int argc, char **argv)
{
    asm_t *info = init_prog();
    if (parse_arg(argc, argv, info) == -1) {
        delete_all(info);
        return (-1);
    }
    if (get_file_data(info->input, info->output) == -1) {
        delete_all(info);
        return (-1);
    }
    if (save_data(info) == -1) {
        delete_all(info);
        return (-1);
    }
    if (write_output_file(info) == -1) {
        delete_all(info);
        return (-1);
    }
    delete_all(info);
    return (0);
}
