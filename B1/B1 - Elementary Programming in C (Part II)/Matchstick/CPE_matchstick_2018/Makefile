##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile
##

NAME	=	matchstick

SRC	=	src/main.c	\
		src/display_help.c	\
		src/check_error.c	\
		src/check_save_arg.c	\
		src/generate_map.c	\
		src/delete_map.c	\
		src/display_map.c	\
		src/matchstick.c	\
		src/get_line.c	\
		src/get_matches.c	\
		src/check_win.c	\
		src/players_turn.c	\
		src/remove_matches.c	\
		src/ias_turn.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re
