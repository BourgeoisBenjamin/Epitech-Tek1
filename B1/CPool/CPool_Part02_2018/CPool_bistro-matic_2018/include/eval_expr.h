/*
** EPITECH PROJECT, 2018
** HEADER
** File description:
** Header file
*/

#ifndef EVAL_EXPR_H
#define EVAL_EXPR_H

int number(char **str);
char *replace_spaces(char const *str);
int is_parenthesis(char c);
int parse_parenth(char **expr);
int parse_adv_op(char **expr);
int parse_simple_op(char **expr);
char *calc_str_add(char *first, char *next);
char *calc_str_sub(char *first, char *next);
char *calc_str_mod(char *first, char *next);
char *calc_str_div(char *first, char *next);
char *calc_str_mul(char *first, char *next);
char *my_itoa(int nb);
char *convert_base(char *expr);
char *convert_operators(char *expr);

#endif
