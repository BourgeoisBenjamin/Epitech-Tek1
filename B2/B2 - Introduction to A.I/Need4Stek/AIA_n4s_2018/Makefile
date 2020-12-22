##
## EPITECH PROJECT, 2018
## NEED4STEK
## File description:
## A simple Makefile to compile
##

NAME	=	ai

SRC	=	src/main.c	\
		src/send_command.c	\
		src/get_return_command.c	\
		src/start_simulation.c	\
		src/ai.c	\
		src/stop_simulation.c	\
		src/is_end.c	\
		src/set_speed.c	\
		src/set_dir.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
	mv ai ../n4s_package

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) ../n4s_package/ai
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
