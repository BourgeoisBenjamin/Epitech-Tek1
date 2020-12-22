##
## EPITECH PROJECT, 2018
## COREWAR
## File description:
## A simple Makefile to compile
##

SRC_DIR = ./src/
DLT_DIR = ./src/delete/
INIT_DIR = ./src/init/
PARSER_DIR = ./src/parser/

SRC	=	$(DLT_DIR)delete_all.c				\
		$(INIT_DIR)init_vm.c				\
		$(INIT_DIR)op.c						\
		$(INIT_DIR)init_champions.c			\
		$(PARSER_DIR)get_file.c				\
		$(PARSER_DIR)is_dot_s.c				\
		$(PARSER_DIR)parse_arg.c			\
		$(PARSER_DIR)parse_comment.c		\
		$(PARSER_DIR)parse_file.c			\
		$(PARSER_DIR)parse_header.c			\
		$(PARSER_DIR)parse_help.c			\
		$(PARSER_DIR)parse_nb_arg.c			\
		$(PARSER_DIR)parser_program_name.c	\
		$(PARSER_DIR)usage.c				\
		$(SRC_DIR)vm_main.c					\
		$(SRC_DIR)main.c					\

OBJ	=	$(SRC:.c=.o)

NAME	=	corewar

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ../lib/include -I./include

LDFLAGS	=	-lmy -L../lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ../lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ../lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ../lib/my fclean

re:	fclean all

debug:	CFLAGS += -g
debug: re

.PHONY: all clean fclean re
