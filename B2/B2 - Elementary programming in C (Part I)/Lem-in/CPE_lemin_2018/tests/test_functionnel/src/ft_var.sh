#!/bin/bash
##
## EPITECH PROJECT, 2019
## LEM_IN
## File description:
## Test
##

red=$(tput bold ; tput setaf 1)
green=$(tput bold ; tput setaf 2)
yellow=$(tput bold ; tput setaf 3)
blue=$(tput bold ; tput setaf 6)
normal=$(tput sgr0)
i=0
j=0
total=0
nb_err=0
leaks="KO"

ft_compilation()
{
    echo -e "\n${blue}--------"
    echo -e "${yellow}Compilation"
    sleep 1s
    if [ -e "$EXEC/Makefile" ]; then
        make -s -C $EXEC/ fclean && make -s -C $EXEC/
        if [ $? -eq 0 ]; then
            echo -e "${green}[SUCCESS]"
            echo -e "${blue}--------\n"
        else
            echo -e "${red}[FAILED]"
            echo -e "${blue}--------"
            exit 84
        fi
    else
        echo -e "${red}[MAKEFILE IS MISSING]"
        echo -e "${blue}--------"
        exit 84
    fi
}

ft_valgrind()
{
    echo -e "${blue}Continue to Valgrind Check ? Enter to continue, other to quit."
    read -n 1 -s key
    if [ "${key}" != "" ]
    then
        exit 0
    fi
    echo -e "\n${blue}--------"
    echo -e "${yellow}Valgrind"
    sleep 1s
    echo -e "${normal}"
    valgrind --leak-check=full --error-exitcode=42 $EXEC/lem_in < maps_tests/subject0.map
    echo -e "${normal}"
    if [ $? -eq 0 ]; then
        echo -e "${green}[SUCCESS] NO LEAK MEMORY"
        echo -e "${blue}--------\n"
    else
        echo -e "${red}[FAILED] LEAK MEMORY"
        echo -e "${blue}--------"
        exit 84
    fi
}

ft_norme()
{
    echo -e "${blue}Continue to Norme Check ? Enter to continue, other to quit."
    read -n 1 -s key
    if [ "${key}" != "" ]
    then
        exit 0
    fi
    echo -e "\n${blue}--------"
    echo -e "${yellow}Norme\n"
    sleep 1s
    norminette -Ai 4 $EXEC
    echo -e "${blue}--------\n"
}

ft_clean()
{
    echo -e "\n${blue}--------"
    echo -e "${yellow}CLEAN UP"
    sleep 1s
    rm -rf vgcore*
    if [ -e "$EXEC/Makefile" ]; then
        make -s -C $EXEC/ fclean
        if [ $? -eq 0 ]; then
            echo -e "${green}[SUCCESS]"
            echo -e "${blue}--------\n"
        else
            echo -e "${red}[FAILED]"
            echo -e "${blue}--------"
            exit 84
        fi
    else
        echo -e "${red}[MAKEFILE IS MISSING]"
        echo -e "${blue}--------"
        exit 84
    fi
}

ft_display_err()
{
    echo -e "\n${blue}--------"
    printf "\t$yellow ERROR [$nb_err / $total]$normal\n"
    echo -e "${blue}--------\n"
}
