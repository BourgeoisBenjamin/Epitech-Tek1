#!/bin/bash
##
## EPITECH PROJECT, 2019
## LEM_IN
## File description:
## Test
##

ft_errors_test()
{
    echo -e "${blue}Continue to Error map tests ? Enter to continue, other to quit."
    read -n 1 -s key
    if [ "${key}" != "" ]
    then
        exit 0
    fi
    echo -e "\n${blue}--------"
    echo -e "${yellow}Error Map Tests"
    sleep 1s
    echo -e "${normal}"
    for d in maps_tests/error_maps/*
    do
        printf "$yellow[$(basename $d)]$normal\n"
        for f in maps_tests/error_maps/$(basename $d)/*
        do
            printf "\t$green[$(basename $f)] : $normal"
            err=$(valgrind -q --leak-check=full --error-exitcode=42 $EXEC/lem_in < $f &> /dev/null)
            leak=$?
            if [ $leak -eq 139 ]; then
                nb_err=$((nb_err+1))
                printf " $red[SEGFAULT]$normal"
            elif [ $leak -eq 42 ]; then
                printf " $red[LEAKS MEMORY]$normal"
                nb_err=$((nb_err+1))
            elif [[ $leak -eq 84 ]]; then
                printf " $green[OK]$normal"
            else
                printf " $red[KO]$normal"
                nb_err=$((nb_err+1))
            fi
            total=$((total+1))
            printf "\n"
        done
        printf "\n"
    done
}
