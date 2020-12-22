##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile
##

NAME	=	my_popup

FILES	=	src/main.c	\
		src/my_popup.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I include

LDFLAGS	=	-lmy -L./lib -lncurses

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C tests/

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
