/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** header
*/

#ifndef BOGGLE_H
#define BOGGLE_H

#include "my.h"
#include <string.h>

typedef struct boggle_s
{
    char **grid;
    int size;
    char *letter;
    char *word;
} boggle_t;

int boggle(int ac, char **av);
void delete_all(boggle_t *info);
int parse_info(int ac, char **av, boggle_t *info);
boggle_t *init_boggle(void);
int create_grid(boggle_t *info);
void display_grid(boggle_t *info);
void display_line(int size);
void display_middle_line(char *grid, int size);
int search_word(boggle_t *info, char *word);
int search_next_letter_v(char **grid, int *pos, char *word, int i);
int search_next_letter_h(char **grid, int *pos, char *word, int i);
int search_word(boggle_t *info, char *word);
int game(boggle_t *info);

#endif
