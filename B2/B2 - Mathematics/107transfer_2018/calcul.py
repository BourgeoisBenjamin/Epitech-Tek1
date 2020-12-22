#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 107transfer
# =============================================================================
"""
Calcul function for the 107transfer project
"""
# =============================================================================
# Imports
import sys
import math
import usage
# =============================================================================

def function(list_1, list_2, x):
    num = 0.000
    den = 0.000

    for i in range(0, len(list_1)):
        num += list_1[i] * pow(x, i)
    for i in range(0, len(list_2)):
        den += list_2[i] * pow(x, i)
    if (num == 0 and den == 0):
        return 1
    if (den == 0):
        usage.display_usage()
        sys.exit(84)
    return(num / den)

def calcul(x, pos):
    list_1 = []
    list_2 = []
    fx = 0.000
    list_1 = sys.argv[pos - 1].split('*')
    for i in range(0, len(list_1)):
        list_1[i] = int(list_1[i])
    list_2 = sys.argv[pos].split('*')
    for i in range(0, len(list_2)):
        list_2[i] = int(list_2[i])
    fx = function(list_1, list_2, x)
    return (fx)
