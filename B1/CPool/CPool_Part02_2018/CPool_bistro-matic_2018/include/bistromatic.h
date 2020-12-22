/*
** EPITECH PROJECT, 2018
** Bistro-matic
** File description:
** Header for the bistro-matic Project
*/

#define OP_OPEN_PARENT_IDX 0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX 2
#define OP_SUB_IDX 3
#define OP_NEG_IDX 3
#define OP_MULT_IDX 4
#define OP_DIV_IDX 5
#define OP_MOD_IDX 6

#define EXIT_USAGE 84
#define EXIT_BASE 84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC 84
#define EXIT_READ 84
#define EXIT_OPS 84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"

char *get_expr(unsigned int size);
int check_ops(char const *ops);
int check_base(char const *b);
void man(char **av);
int check_base_operands(char **av);
char *eval_expr(char *expr, int size);
int my_atoi(char const *str);
int count_parenth(char *expr);
