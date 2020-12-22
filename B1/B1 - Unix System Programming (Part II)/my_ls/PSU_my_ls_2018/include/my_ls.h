/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** header
*/

#include <my.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

#define DIRECTORY 20
#define FILE 21


typedef struct s_flag
{
    int fl;
    int fR;
    int fd;
    int fr;
    int ft;
    int j;
} t_flag;

typedef struct s_list
{
    struct s_info *start;
    struct s_info *end;
    char name[PATH_MAX];
    int length;
} t_list;

typedef struct s_info
{
    char name[PATH_MAX];
    struct dirent *dp;
    struct stat info;
    struct passwd *pwd;
    struct group *gr;
    struct s_info *prev;
    struct s_info *next;
} t_info;

void display_help(void);
int help(char arg, t_flag *flag);
int sort_arg(char **argv, t_flag *flag);
void display_type(t_info *file);
void display_right(t_info *file);
void display_time(t_info *file);
int display_total(t_list *list);
void display_l(t_list *list);
void display(t_list *list, t_flag *flag);
t_list *t_listnew(void);
t_list *t_list_append(t_list *list, t_info *file);
t_list *t_list_prepend(t_list *list, t_info *file);
void t_list_delete(t_list **list);
void t_list_swap_elem(t_info *file, t_info *file2);
void *init_flag(void);
void what_flag(char arg, t_flag *flag);
int get_flags(char **argv, t_flag *flag);
t_info *get_files(char *pathname);
int get_dir(t_list *list, char *pathname, t_flag *flag);
int my_ls(char *pathname, t_flag *flag);
int my_strcmp_time(int time1, int time2);
int sort_untime(t_info *file, t_info *file2);
int sort_time(t_info *file, t_info *file2);
void t_list_sort_time(t_list *list, t_flag *flag);
int my_strcmp_uncap(char const *s1, char const *s2);
int sort_unalpha(t_info *file, t_info *file2);
int sort_alpha(t_info *file, t_info *file2);
void t_list_sort_alpha(t_list *list, t_flag *flag);
void get_name(t_info *file, char *pathname);
int files_or_dir(struct stat info);
void display_major_or_size(struct stat info);