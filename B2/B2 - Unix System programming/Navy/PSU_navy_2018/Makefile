##
## EPITECH PROJECT, 2018
## NAVY
## File description:
## A simple Makefile to compile
##

NAME	=	navy

SRC	=	src/main.c	\
		src/help.c	\
		src/init.c	\
		src/free.c	\
		src/check_files/check.c	\
		src/check_files/files.c	\
		src/check_files/parse_map.c	\
		src/check_files/create_boat.c	\
		src/client/client.c	\
		src/server/server.c	\
		src/game/receive/receiver.c	\
		src/game/send/sender.c	\
		src/game/attack.c	\
		src/game/display_map.c	\
		src/game/game.c	\
		src/game/navy.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

tests_run:
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
