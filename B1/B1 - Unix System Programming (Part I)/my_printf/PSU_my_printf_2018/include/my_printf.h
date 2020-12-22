/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Header
*/

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

void redirect_all_std(void);
int my_putchar(int c);
int is_flag(char f);
int sort_flags(char flag, void *arg);
int my_printf(const char *str, ...);
int my_put_nbr_binary(long long nbr);
int my_put_nbr(int nbr);
int my_put_nbr_hexa(long long nbr);
int my_put_nbr_hexa_capitalize(long long nbr);
int my_put_nbr_octal(long long nbr);
int my_put_ptr_add(long long add);
int my_putstr(char const *str);
int my_putstr_np(char *str);
int sort_flags(char flag, void *arg);
int my_printf(const char *str, ...);

typedef struct s_func
{
    int (*ptr)();
    char flag;
} t_func;
