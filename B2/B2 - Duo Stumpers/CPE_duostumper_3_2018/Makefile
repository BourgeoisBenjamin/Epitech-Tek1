##
## EPITECH PROJECT, 2018
## DUOSTUMPERS
## File description:
## A simple Makefile to compile
##

NAME	=	minicut

SRC	=	src/main.c	\
		src/minicut.c	\
		src/delete.c	\
		src/get_arg.c	\
		src/init_opt.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include -g

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
