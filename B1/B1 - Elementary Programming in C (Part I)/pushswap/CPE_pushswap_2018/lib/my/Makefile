##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## A simple Makefile to compile my project with my lib
##

NAME	=	libmy.a

SRC	=	my_puterror.c		\
		concat_params.c		\
	  	my_compute_power_rec.c	\
	  	my_compute_square_root.c\
	  	my_find_prime_sup.c	\
	  	my_getnbr.c		\
	  	my_isneg.c		\
	  	my_is_prime.c		\
	  	my_putchar.c		\
	  	my_put_nbr.c		\
	  	my_putstr.c		\
	  	my_revstr.c		\
	  	my_show_word_array.c	\
	  	my_sort_int_array.c	\
	  	my_strcapitalize.c	\
	  	my_strcat.c		\
	  	my_strcmp.c		\
	  	my_strcpy.c		\
	  	my_strdup.c		\
	  	my_str_isalpha.c	\
	  	my_str_islower.c	\
	  	my_str_isnum.c		\
	  	my_str_isprintable.c	\
	  	my_str_isupper.c	\
	  	my_strlen.c		\
	  	my_strlowcase.c		\
	  	my_strncat.c		\
	  	my_strncmp.c		\
	  	my_strncpy.c		\
	  	my_strstr.c		\
	  	my_str_to_word_array.c	\
	  	my_strupcase.c		\
	  	my_swap.c		\
	  	my_printf.c	\
		is_flag.c	\
		my_putchar.c	\
		my_put_nbr_binary.c	\
		my_put_nbr.c	\
		my_put_nbr_hexa.c	\
		my_put_nbr_hexa_capitalize.c	\
		my_put_nbr_octal.c	\
		my_put_ptr_add.c	\
		my_putstr.c	\
		my_putstr_np.c	\
		sort_flags.c	\
		my_isdigit.c	\

CFLAGS = 	-I../include -W -Wall -Wshadow -Wextra -Werror

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ./../

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf ./../$(NAME)

re: fclean all

.PHONY: all clean fclean re
