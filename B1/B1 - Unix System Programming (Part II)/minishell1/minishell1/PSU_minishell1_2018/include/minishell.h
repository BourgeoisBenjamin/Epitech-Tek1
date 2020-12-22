/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** header
*/

#ifndef MINISHELL_H
#define MINISHELL_H

#define EXIT_ERROR 84
#include "my.h"
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

typedef struct s_info
{
    char *command;
    char **arg;
    char **env;
    char *path;
    int status;
    pid_t pid;
    pid_t child_pid;

} t_info;

typedef struct s_builtin
{
    char *name;
    int (*ft)(t_info *program);
} t_builtin;

/* FREE FT */
int free_builtin(t_builtin **builtin);
int free_child(t_info *program);
int free_all(t_info *program, t_builtin **builtin);

/* PARENT */
void parent_process(t_info *program);

/* CHILD */
pid_t create_process(void);
int child_process(t_info *program);
int check_path(char *path);
char *get_right_path(char *path, char **path_tab);

/* SH */
int prepare_my_sh(char **env);
int my_sh(t_info *program, t_builtin **builtin);
void print_prompt(void);

/* FORK */
int exec_cmd(t_info *program, t_builtin **builtin);
int exec_fork(t_info *program);

/* BUILTIN */
t_builtin **init_builtin(void);
int is_builtin(t_info *program, t_builtin **builtin);
char *search_env(char **env, char *search);
int verif_arg_env(char **arg);
int is_in_env(char **env, char *new);
void repair_env(t_info *program);
/*ENV*/
int my_env(t_info *program);
/*CD*/
int my_cd(t_info *program);
int change_dir(char *dir);
int change_old_dir(t_info *program);
int exec_cd(t_info *program);
int update_envcd(t_info *program, char *old_pwd);
int verif_cd(t_info *program);
/*UNSETENV*/
int my_unsetenv(t_info *program);
char **exec_unsetenv(char **env, int pos);
char **do_unsetenv(char **env, char *del);
/*SETENV*/
int my_setenv(t_info *program);
char **replace_venv(char **env, char *name, char *value);
void create_venv(char *new_v, char *name, char *value);
char **add_venv(char **env, char *name, char *value);

/* SIGNAL */
int prepare_signal(void);
void sigint_handler(int sig);

#endif
