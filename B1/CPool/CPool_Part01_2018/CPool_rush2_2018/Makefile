##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my do_op project
##

SRC	=	rush.c		\

NAME	=	rush2

CFLAGS	=	-I include/

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -lmy -L./lib/my
clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
