##
## EPITECH PROJECT, 2018
## PROJECT
## File description:
## A simple Makefile to compile
##

NAME	=	test

SRC	=	src/main.c	\
		src/init_list.c	\
		src/create_node.c	\
		src/insert_node_end.c	\
		src/insert_node_beg.c	\
		src/delete_node_pos.c	\
		src/delete_list.c	\
		src/delete_node.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

tests_run:
	@$(MAKE) --no-print-directory -s -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

debug: CFLAGS += -g
debug: re

.PHONY: all clean fclean re tests_run
