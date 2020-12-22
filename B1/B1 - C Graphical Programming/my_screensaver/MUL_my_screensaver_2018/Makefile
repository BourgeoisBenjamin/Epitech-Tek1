##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	my_screensaver

FILES	=	src/main.c	\
			src/my_screensaver.c	\
			src/usage.c	\
			src/background.c	\
			src/circle.c	\
			src/clear_buffer.c	\
			src/crazy_circle.c	\
			src/create_my_windows.c	\
			src/draw_circle.c	\
			src/draw_line.c	\
			src/framebuffer_create.c	\
			src/line.c	\
			src/my_put_pixel.c	\
			src/rotation_cube.c	\
			src/square.c	\
			src/stars.c	\
			src/widening_circle.c	\
			src/create_point_cube.c	\
			src/rotation_cube2.c	\
			src/rotation_cube3.c	\
			src/google_logo.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all:	$(OBJECTS)
	$(MAKE) -C ./lib/my
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
