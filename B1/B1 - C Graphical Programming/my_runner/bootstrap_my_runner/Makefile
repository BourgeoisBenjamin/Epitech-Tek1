##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	my_runner

FILES	=	src/main.c

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re