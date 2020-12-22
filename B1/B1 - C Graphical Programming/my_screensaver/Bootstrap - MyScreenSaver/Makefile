##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my infinadd project
##

NAME	=	myscreensaver

FILES	=	src/main.c	\
		src/create_my_windows.c	\
		src/framebuffer_create.c	\
		src/my_put_pixel.c	\
		src/my_draw_square.c	\
		src/draw_line.c	\
		src/draw_circle.c	\

OBJECTS	=	$(FILES:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wshadow -I include -g

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all:	$(OBJECTS)
	gcc $(OBJECTS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
