/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** include
*/

#include <my.h>

typedef struct s_node
{
    int data;
    struct s_node *back;
    struct s_node *next;
} t_node;

typedef struct s_list
{
    int length;
    struct s_node *start;
    struct s_node *end;
} t_list;

/* MAIN */
int params_to_list(char **argv, t_list *l_a);
int sort_list(t_list *l_a, t_list *l_b);

/* CHECK */
int check_arg(char **argv);

/* FT BASE LIST */

t_list *t_listnew(void);
t_list *t_list_append(t_list *l_a, int data);
t_list *t_list_prepend(t_list *l_a, int data);
void t_list_delete(t_list **l_a);
void t_list_display(t_list *l_a);

/* SA_SB */
void t_list_sa(t_list *l_a);
void t_list_sb(t_list *l_b);
void t_list_ss(t_list *l_a, t_list *l_b);

/* PA_PB */
void t_list_pa(t_list *l_a, t_list *l_b);
void t_list_pb(t_list *l_a, t_list *l_b);

/* RA_RB */
void t_list_ra(t_list *l_a);
void t_list_rb(t_list *l_b);
void t_list_rr(t_list *l_a, t_list *l_b);

/* RRA_RRB */
void t_list_rra(t_list *l_a);
void t_list_rrb(t_list *l_b);
void t_list_rrr(t_list *l_a, t_list *l_b);

/* DISPLAY OPERATION */
void display_operation(char *str, t_list *l_a, t_list *l_b);

/* IS_SORT */
int is_sort(t_list *list);

/* SORT_ALGO */
int sort_list(t_list *l_a, t_list *l_b);
int sort_algo(t_list *l_a, t_list *l_b);
int select_sort_a(t_list *l_a, t_list *l_b);
int sort_algo_b(t_list *l_a, t_list *l_b);