/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** ASM PARSER
*/

#ifndef ASM_PARSER_H
#define ASM_PARSER_H

/* PARSE ARGUMENT */
int parse_arg(int argc, char **argv, asm_t *info);
char *get_input_filename(char **argv);
void parse_help(char *arg, asm_t *info);
int parse_nb_arg(int argc);
void usage(void);

/* GET FILE DATA */
int get_file_data(info_file_t *input, info_file_t *output);
FILE *open_file_stream(char *filename, char *mode);
int open_file_fd(char *filename);
line_t *add_new_line(line_t *lines, int *len, line_t *new);
line_t *create_new_data_node(char *data);
int transform_data(info_file_t *file, char *data);
char *get_name_output_file(char *filename);
int clean_data(info_file_t *file);

#endif
