##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my project with my lib
##

NAME	=	libmy.a

SRC	=	src/my_puterror.c	\
		src/concat_params.c	\
	  	src/my_compute_power_rec.c	\
	  	src/my_compute_square_root.c	\
	  	src/my_find_prime_sup.c	\
	  	src/my_getnbr.c	\
	  	src/my_isneg.c	\
	  	src/my_is_prime.c	\
	  	src/my_putchar.c	\
	  	src/my_put_nbr.c	\
	  	src/my_putstr.c	\
	  	src/my_revstr.c	\
	  	src/my_showmem.c	\
	  	src/my_showstr.c	\
	  	src/my_show_word_array.c	\
	  	src/my_sort_int_array.c	\
	  	src/my_strcapitalize.c	\
	  	src/my_strcat.c	\
	  	src/my_strcmp.c	\
	  	src/my_strcpy.c	\
	  	src/my_strdup.c	\
	  	src/my_str_isalpha.c	\
	  	src/my_str_islower.c	\
	  	src/my_str_isnum.c	\
	  	src/my_str_isprintable.c	\
	  	src/my_str_isupper.c	\
	  	src/my_strlen.c	\
	  	src/my_strlowcase.c	\
	  	src/my_strncat.c	\
	  	src/my_strncmp.c	\
	  	src/my_strncpy.c	\
	  	src/my_strstr.c	\
	  	src/my_str_to_word_array.c	\
	  	src/my_strupcase.c	\
	  	src/my_swap.c	\
		src/disp_stdarg.c	\
		src/sum_stdarg.c	\

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
