##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile
##

NAME	=	my_ls

FILES	=	src/main.c	\
			src/help.c	\
			src/flag.c	\
			src/linked_list.c	\
			src/sort_alpha.c	\
			src/my_ls.c	\
			src/error_exit.c	\
			src/sort_time.c	\
			src/sort_arg.c	\
			src/get_files.c	\
			src/get_dir.c	\
			src/get_name.c	\
			src/display.c	\
			src/display_infos.c	\
			src/display_major_or_size.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

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
