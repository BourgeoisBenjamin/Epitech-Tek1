##
## EPITECH PROJECT, 2018
## DANTE
## File description:
## A simple Makefile to compile
##

NAME	=	solver

SRC	=	main.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./../lib/include -I./../include

LDFLAGS	=	-lmy -L./../lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
