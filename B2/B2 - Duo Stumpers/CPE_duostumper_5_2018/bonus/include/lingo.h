/*
** EPITECH PROJECT, 2019
** LINGO
** File description:
** header
*/

#ifndef LINGO_H
#define LINGO_H

#include "my.h"
#include <string.h>
#include <stdio.h>
#include <time.h>

int lingo(int argc, char **argv);
char **get_file(int argc, char **argv);
int open_file(int argc, char **argv);
int check_words(char **tab);
int game(char **tab);
char *choose_word(char **tab);
char *start_game(char *original_word);

#endif
