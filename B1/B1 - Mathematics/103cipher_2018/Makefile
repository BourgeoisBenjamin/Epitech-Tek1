##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	103cipher

FILES	=	src/main.c	\
			src/check_data.c	\
			src/display_usage.c	\
			src/encryption.c	\
			src/set_ft_encryption.c	\
			src/malloc_ft.c	\
			src/utils_ft.c	\
			src/decryption.c	\
			src/set_ft_decryption.c	\
			src/decryption_option.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include -g

LDFLAGS	=	-lmy -L./lib -lm

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
