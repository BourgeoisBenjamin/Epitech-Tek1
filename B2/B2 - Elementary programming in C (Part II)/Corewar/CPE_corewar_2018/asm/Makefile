##
## EPITECH PROJECT, 2018
## COREWAR
## File description:
## A simple Makefile to compile
##

SRC_DIR = ./src/
DLT_DIR = ./src/delete/
INIT_DIR = ./src/init/
OUTPUT_DIR = ./src/output/
PARSER_DIR = ./src/parser/
PARSER_ARG_DIR = ./src/parser/arg/
PARSER_FILE_DIR = ./src/parser/file/
TRANSFORM_DATA_DIR = ./src/transform/
GETLINE_DIR = ./src/get_line/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)asm_main.c	\
		$(INIT_DIR)init_asm.c	\
		$(INIT_DIR)init_header.c	\
		$(INIT_DIR)init_info_file.c	\
		$(INIT_DIR)init_prog.c	\
		$(OUTPUT_DIR)write_log.c	\
		$(OUTPUT_DIR)write_output_file.c	\
		$(OUTPUT_DIR)write_header.c	\
		$(GETLINE_DIR)get_line.c	\
		$(DLT_DIR)delete_all.c	\
		$(DLT_DIR)delete_header.c	\
		$(DLT_DIR)delete_info_file.c	\
		$(PARSER_ARG_DIR)get_input_filename.c	\
		$(PARSER_ARG_DIR)parse_arg.c	\
		$(PARSER_ARG_DIR)parse_help.c	\
		$(PARSER_ARG_DIR)parse_nb_arg.c	\
		$(PARSER_ARG_DIR)usage.c	\
		$(PARSER_FILE_DIR)clean_data.c	\
		$(PARSER_FILE_DIR)get_file_data.c	\
		$(PARSER_FILE_DIR)get_name_output_file.c	\
		$(PARSER_FILE_DIR)open_file_stream.c	\
		$(PARSER_FILE_DIR)open_file_fd.c	\
		$(TRANSFORM_DATA_DIR)save_data.c	\
		$(TRANSFORM_DATA_DIR)header/create_header.c	\
		$(TRANSFORM_DATA_DIR)transform_line/transform_line_data.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	asm

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ../lib/include -I./include

LDFLAGS	=	-lmy -L../lib

CC	=	gcc

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ../lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	$(MAKE) -C ../lib/my clean
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ../lib/my fclean

re:	fclean all

debug:	CFLAGS += -g
debug: re

.PHONY: all clean fclean re
