##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	101pong

FILES	=	src/main.c	\
		src/check_data.c	\
		src/display_usage.c	\
		src/prepare_struct.c	\
		src/pong.c	\
		src/calc_velocity.c	\
		src/calc_coord_n.c	\
		src/calc_incidence_angle.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./include

TESTS	=	./tests


all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME) -lm $(LDFLAGS)

tests_run:
	$(MAKE) -C $(TESTS)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re tests_run
