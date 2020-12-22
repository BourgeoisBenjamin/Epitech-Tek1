/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** ASM DELETE
*/

#ifndef ASM_DELETE_H
#define ASM_DELETE_H

void delete_all(asm_t *info);
void delete_line(line_t *line);
void delete_file_data(line_t *line);
void delete_info_file(info_file_t *file);
void delete_header(header_t *header);

#endif
