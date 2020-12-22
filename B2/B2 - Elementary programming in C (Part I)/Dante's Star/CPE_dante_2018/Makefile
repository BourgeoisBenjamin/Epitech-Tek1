##
## EPITECH PROJECT, 2018
## DANTE
## File description:
## A simple Makefile to compile
##

all:
	$(MAKE) -C ./lib/my
	$(MAKE) -C ./solver
	$(MAKE) -C ./generator

tests_run:
	$(MAKE) -C ./tests

clean:
	$(MAKE) -C ./lib/my clean
	$(MAKE) -C ./tests/ clean
	$(MAKE) -C ./solver clean
	$(MAKE) -C ./generator clean

fclean:	clean
	$(MAKE) -C ./lib/my fclean
	$(MAKE) -C ./tests/ fclean
	$(MAKE) -C ./solver fclean
	$(MAKE) -C ./generator fclean

re:	fclean all

.PHONY: all clean fclean re tests_run
