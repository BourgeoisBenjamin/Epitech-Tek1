/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** ASM SAVE DATA
*/

#ifndef ASM_SAVE_DATA_H
#define ASM_SAVE_DATA_H

int save_data(asm_t *info);
int get_name_champion(header_t *header, info_file_t *input);
int get_comment_champion(header_t *header, info_file_t *input);
int create_header(header_t *header, info_file_t *input);

int transform_line_data(line_t *line, asm_t *info);

#endif
