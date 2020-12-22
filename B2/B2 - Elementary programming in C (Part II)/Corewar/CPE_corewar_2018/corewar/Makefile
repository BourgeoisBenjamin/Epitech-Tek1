##
## EPITECH PROJECT, 2018
## COREWAR
## File description:
## A simple Makefile to compile
##

SRC_DIR = ./src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)corewar.c	\
		$(SRC_DIR)delete_all.c	\
		$(SRC_DIR)init_corewar.c	\
		$(SRC_DIR)parser_arg/parse_arg.c	\
		$(SRC_DIR)parser_arg/parse_arg_ft.c	\
		$(SRC_DIR)parser_arg/display_help.c	\

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
