##
## EPITECH PROJECT, 2018
## MINISHELL1
## File description:
## A simple Makefile to compile
##

NAME	=	mysh

SRC	=	src/main.c	\
		src/free_ft.c	\
		src/builtin/init_builtin.c	\
		src/builtin/is_builtin.c	\
		src/builtin/env/my_env/my_env.c	\
		src/builtin/env/my_setenv/add_venv.c	\
		src/builtin/env/my_setenv/create_venv.c	\
		src/builtin/env/my_setenv/my_setenv.c	\
		src/builtin/env/my_setenv/replace_venv.c	\
		src/builtin/env/my_setenv/verif_arg_env.c	\
		src/builtin/env/my_unsetenv/do_unsetenv.c	\
		src/builtin/env/my_unsetenv/exec_unsetenv.c	\
		src/builtin/env/my_unsetenv/my_unsetenv.c	\
		src/builtin/env/is_in_env.c	\
		src/builtin/env/repair_env.c	\
		src/builtin/env/search_env.c	\
		src/builtin/my_cd/change_dir.c	\
		src/builtin/my_cd/change_old_dir.c	\
		src/builtin/my_cd/exec_cd.c	\
		src/builtin/my_cd/my_cd.c	\
		src/builtin/my_cd/update_envcd.c	\
		src/builtin/my_cd/verif_cd.c	\
		src/child/child_process.c	\
		src/child/create_process.c	\
		src/child/get_right_path.c	\
		src/fork/exec_fork.c	\
		src/parent/parent_process.c	\
		src/sh/my_sh.c	\
		src/sh/prepare_my_sh.c	\
		src/sh/print_prompt.c	\
		src/signal/prepare_signal.c	\
		src/signal/signal_handler.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
