##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	eval_expr

FILES	= main.c \
		eval_expr.c	\
		number.c	\
		operations.c	\
		parse_expression.c \

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

TESTS	=	./tests


all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
