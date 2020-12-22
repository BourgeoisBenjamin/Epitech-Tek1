##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile
##

NAME	=	my_exec

SRC	=	src/main.c	\
		src/get_infos.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re
