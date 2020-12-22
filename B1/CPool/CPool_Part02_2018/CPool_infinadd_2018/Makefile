##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	infin_add

FILES	=	main.c	\
		infinadd.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/includes

LDFLAGS	=	-lmy -L./lib

TESTS	=	./tests


all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

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
