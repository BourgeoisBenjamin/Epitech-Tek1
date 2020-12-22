/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** header
*/

#ifndef VM_H
#define VM_H

#include "my.h"
#include "op.h"

#include <stdbool.h>
#include <stdio.h>

typedef struct flags {
    int flag_a;
    int flag_dump;
    int flag_n;
} flag_t;

typedef struct vm_s
{
    FILE *fd;
    header_t *header;
    int nb;
    int adress;
    char **commands;
} vm_t;

void delete_all(vm_t **info);

vm_t *init_vm(void);

FILE *get_file(char *filepath);
bool is_dot_s(char *filepath);
int parse_arg(int argc, char **argv, vm_t **info);
int parse_comment(vm_t *info);
int parse_file(char *filepath, vm_t **info, flag_t *flag_status);
int parse_header(vm_t *info);
char **put_getline_in_array(vm_t *info);
int header_recup_info(char *str, char write_here[]);
void parse_help(char *arg, vm_t **info);
int parse_nb_arg(int argc);
int parse_program_name(vm_t *info);
void init_champions(vm_t **info);
int find_empty_line_in_array(vm_t **info);
void usage(void);

int vm_main(int argc, char **argv);

#endif
