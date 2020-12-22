#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 106bombix
# =============================================================================
"""
Calcul function for the 106bombyx project
"""
# =============================================================================
# Imports
import sys
import math
# =============================================================================

def next_gen(x, k):
    n = (k * x * (1000 - x) / 1000)
    if (n < 0):
        return 0
    else:
        return n

def calcul_option_1(n, k):
    for i in range(1, 101):
            print(i, "%0.2f" % (n), sep=" ")
            n = next_gen(n, k)

def calcul_option_2(n, i0, i1):
    k = 1.00
    while (k <= 4):
        for i in range(1, i0 + 1):
            n = next_gen(n, k)
        for i in range(i0, i1 + 1):
            print("%0.2f %0.2f" % (k, n))
            n = next_gen(n, k)
        k += 0.01
