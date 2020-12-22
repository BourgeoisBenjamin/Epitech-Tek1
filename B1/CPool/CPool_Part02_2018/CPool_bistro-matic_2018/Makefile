##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	calc

SRC	=	src/eval/my_atoi.c	\
		src/syntax/check_usage.c	\
		src/syntax/count_parenth.c \
		src/main.c	\
		src/eval/eval_expr.c \
		src/eval/my_itoa.c \
		src/eval/number.c \
		src/eval/operations.c \
		src/eval/parse_expression.c \
		src/result/convert_base.c \
		src/result/convert_operators.c

OBJECTS	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./include -I ./lib/include

LDFLAGS	=	-lmy -L./lib

TESTS	=	./tests

CC	=	gcc

all: $(OBJECTS)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C $(TESTS)

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
