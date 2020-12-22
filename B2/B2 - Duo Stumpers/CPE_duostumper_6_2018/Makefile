##
## EPITECH PROJECT, 2018
## PROJECT
## File description:
## A simple Makefile to compile
##

NAME	=	boggle

SRC	=	src/main.c	\
		src/delete_all.c	\
		src/init_boggle.c	\
		src/boggle.c	\
		src/parse_info.c	\
		src/display.c	\
		src/search_word.c	\
		src/game.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

debug: $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) -g

tests_run:
	$(MAKE) -C ./lib/my
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
