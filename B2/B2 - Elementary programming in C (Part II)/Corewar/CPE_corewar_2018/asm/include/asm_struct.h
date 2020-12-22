/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** ASM STRUCT
*/

#ifndef ASM_STRUCT_H
#define ASM_STRUCT_H

typedef struct info_file_s
{
    FILE *stream;
    int fd;
    char *filename;
    int nb_line;
    struct line_s *lines;
} info_file_t;

typedef struct line_s
{
    char *data;
    struct line_s *next;
} line_t;

typedef struct asm_s
{
    struct info_file_s *input;
    struct info_file_s *output;
    header_t *header;
} asm_t;

#endif
