##
## EPITECH PROJECT, 2018
## FAZZBIZZ
## File description:
## A simple Makefile to compile
##

NAME	=	fazzbizz

SRC	=	src/main.c	\
		src/check_number.c	\
		src/my_strlen.c	\
		src/my_puterror.c	\
		src/fazzbizz.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I./include

all: $(NAME)

$(NAME)	:	$(OBJ)
	gcc $(OBJ) -o $(NAME)

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
