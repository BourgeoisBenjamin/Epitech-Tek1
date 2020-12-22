##
## EPITECH PROJECT, 2018
## my_printf
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	src/my_printf.c	\
		src/is_flag.c	\
		src/my_putchar.c	\
		src/my_put_nbr_binary.c	\
		src/my_put_nbr.c	\
		src/my_put_nbr_hexa.c	\
		src/my_put_nbr_hexa_capitalize.c	\
		src/my_put_nbr_octal.c	\
		src/my_put_ptr_add.c	\
		src/my_putstr.c	\
		src/my_putstr_np.c	\
		src/sort_flags.c	\

CFLAGS	=	-I./include

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	$(MAKE) -C tests/

clean:
	rm -f $(OBJ)
	$(MAKE) -C tests/ clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C tests/ fclean

re: fclean all

.PHONY: all clean fclean re
