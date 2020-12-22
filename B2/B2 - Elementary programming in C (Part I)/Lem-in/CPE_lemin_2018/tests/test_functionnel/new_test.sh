#!/bin/bash
##
## EPITECH PROJECT, 2019
## LEM_IN
## File description:
## Test
##

source src/ft_var.sh
source src/ft_tests_map.sh

echo -e "${blue}"
echo -e "    __                         _          __            __ "
echo -e "   / /   ___  ____ ___        (_)___     / /____  _____/ /_"
echo -e '  / /   / _ \/ __ `__ \______/ / __ \   / __/ _ \/ ___/ __/'
echo -e ' / /___/  __/ / / / / /_____/ / / / /  / /_/  __(__  ) /_  '
echo -e '/_____/\___/_/ /_/ /_/     /_/_/ /_/   \__/\___/____/\__/  '
echo -e '                                                           '
echo -e '                       \/       \/                         '
echo -e '                 ___  _@@       @@_  ___                   '
echo -e '                (___)(_)         (_)(___)                  '
echo -e '                //|| ||           || ||\\                  '
echo -e "                                                           \n"

MAPS=./../../maps

read -e -p "Enter the path to the file (autocompletion enabled): " FILEPATH
eval EXEC=${FILEPATH/\~/$HOME}
echo $EXEC > src/path_to_exec

ft_compilation
ft_valgrind
ft_norme
ft_errors_test
ft_display_err
ft_clean
