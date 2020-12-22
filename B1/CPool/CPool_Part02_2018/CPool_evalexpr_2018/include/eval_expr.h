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
int eval_expr(char const *str);

#endif
