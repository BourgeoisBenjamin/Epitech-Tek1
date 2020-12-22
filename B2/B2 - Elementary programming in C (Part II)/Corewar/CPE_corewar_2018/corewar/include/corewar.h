/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** header
*/

#ifndef COREWAR_H
#define COREWAR_H

#include "my.h"

typedef struct corewar_s
{
    int dump;
    int prog_number;
    int load_adress;
    char *name;
} corewar_t;

corewar_t *init_corewar(void);
void delete_all(corewar_t *info);
int corewar(int argc, char **argv);
int parse_arg(int argc, char **argv, corewar_t *info);
int parse_loadaddress(char **argv, corewar_t *info, int i);
int parse_prognumber(char **argv, corewar_t *info, int i);
int parse_cycle(char **argv, corewar_t *info, int i);
int parse_help(char **argv, corewar_t *info, int i);
int wrong_argument(char **argv, int i);
void display_help(void);
int parse_name(char **argv, corewar_t *info, int i);

#endif
