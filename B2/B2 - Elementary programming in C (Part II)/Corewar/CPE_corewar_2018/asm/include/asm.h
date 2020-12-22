/*
** EPITECH PROJECT, 2019
** ASM_H
** File description:
** header
*/

#ifndef ASM_H
#define ASM_H

#include <stdbool.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "my.h"
#include "op.h"
#include "asm_struct.h"
#include "asm_init.h"
#include "asm_parser.h"
#include "asm_delete.h"
#include "asm_output.h"
#include "asm_save_data.h"

#define LITTLETOBIG(x) (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00)\
| ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000))

int asm_main(int argc, char **argv);
char *get_line(FILE *stream);

#endif
