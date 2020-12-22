/*
** EPITECH PROJECT, 2018
** Parse Arguments
** File description:
** Function to parse arguments
*/

#include "tictactoe.h"

static void check_character(tictactoe_t *ttt, char *str)
{
	if (strlen(str) != 1) {
		dprintf(2, "Bad arguments\n");
		exit(84);
	}
}

static void check_size(tictactoe_t *ttt, char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < '0' || str[i] > '9') {
			dprintf(2, "Bad size\n");
			exit(84);
		}
	}
}

static void switch_args(tictactoe_t *ttt, int *c)
{
	switch (*c) {
	case 0:
		break;
	case 'a':
		check_character(ttt, optarg);
		ttt->p1 = optarg[0];
		break;
	case 'b':
		check_character(ttt, optarg);
		ttt->p2 = optarg[0];
		break;
	case 'c':
		check_size(ttt, optarg);
		ttt->size = atoi(optarg);
		break;
	}
}

static int update_args(tictactoe_t *ttt, int ac, char **av, int *c)
{
	int option = 0;
	static struct option long_options[] = {
		{"p1", required_argument, 0, 'a'},
		{"p2", required_argument, 0, 'b'},
		{"s", required_argument, 0, 'c'},
		{0, 0, 0, 0}
	};

	*c = getopt_long_only(ac, av, "a:b:c", long_options, &option);
	if (*c == -1)
		return (-1);
	switch_args(ttt, c);
}

void get_arg(int ac, char **av, tictactoe_t *ttt)
{
	int c;

	while (1) {
		if (update_args(ttt, ac, av, &c) == -1)
			break;
	}
	if (ttt->p1 == ttt->p2) {
		dprintf(2, "Characters can't be similar\n");
		exit(84);
	}
	if (ttt->size == 0)
		exit(84);
}
