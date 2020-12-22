/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Header BSQ Project
*/

#include <my.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

#define BUFF_SIZE 4096

typedef struct s_bsq
{
    int i;
    int original_rows;
    int original_cols;
    int rows;
    int cols;
} t_bsq;

typedef struct s_square
{
    int size;
    int rows;
    int cols;
    int test_size;
} t_square;

void test_argc(int argc);
int fs_open_file(char const *filepath);
int get_nb_cols(char *str);
char *mem_alloc(char const *a, char const *b);
char *create_str(char **argv);
char **str_to_2d_array(char *str, int nb_rows, int nb_cols);
int check_str(char *str);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **resolve_map(char **tab, int nb_rows, int nb_cols);
void find_biggest_square(char **tab, t_bsq *bsq, t_square *square);
void test_biggest_square(char **tab, t_bsq *bsq, t_square *square);
int is_square_of_size(char **tab, t_bsq *bsq, t_square *square);
void replace_map_solve(char **tab, t_square *square);
void display_map_solve(char **tab, t_bsq *bsq);
void redirect_all_std(void);
int check_map_rows(char *str, int nb_rows);