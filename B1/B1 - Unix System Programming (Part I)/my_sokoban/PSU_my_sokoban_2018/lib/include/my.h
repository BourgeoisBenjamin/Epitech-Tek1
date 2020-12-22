/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** prototypes of my lib
*/

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void my_puterror(char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nbr);
int my_putchar(int c);
int my_putstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char *str);
int my_show_word_array(char *const *tab);
char *my_strdup(char const *src);
char *concat_params(int argc, char **argv);
int check_alphanumeric(char c);
int count_word(char *str);
void my_getnbr2(char const *str, int *number, int *j);
int sort_flags(char flag, void *arg);
int is_flag(char f);
int my_printf(const char *str, ...);
int my_put_nbr_binary(long long nbr);
int my_put_nbr_hexa(long long nbr);
int my_put_nbr_hexa_capitalize(long long nbr);
int my_put_nbr_octal(long long nbr);
int my_put_ptr_add(long long add);
int my_putstr_np(char *str);
void my_put_np(char str);
void redirect_all_std(void);
int my_printf(const char *str, ...);

typedef struct s_func
{
    int (*ptr)();
    char flag;
} t_func;