##
## EPITECH PROJECT, 2018
## COREWAR
## File description:
## A simple Makefile to compile
##

all:
	$(MAKE) -C ./asm/
	$(MAKE) -C ./corewar/

debug:
	$(MAKE) -C ./asm/ debug
	$(MAKE) -C ./corewar/ debug

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./asm/ clean
	$(MAKE) -C ./corewar/ clean
	$(MAKE) -C ./tests/ clean

fclean:
	$(MAKE) -C ./asm/ fclean
	$(MAKE) -C ./corewar/ fclean
	$(MAKE) -C ./tests/ fclean

re:	fclean all

.PHONY: all clean fclean re debug
