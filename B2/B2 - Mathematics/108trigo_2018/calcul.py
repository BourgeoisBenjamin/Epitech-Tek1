#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 108trigo
# =============================================================================
"""
Calcul function for the 108trigo project
"""
# =============================================================================
# Imports
import sys
import math
import usage
import matrixcalc
# =============================================================================

def cosinus(matrix):
    matrix_identity = matrixcalc.create_matrix_identity(len(matrix))
    for i in range(1, 50):
        fact = math.factorial(2 * i)
        matrixpow = matrixcalc.matrix_power(matrix, 2 * i)
        matrixn = matrixcalc.matrix_division(matrixpow, fact)
        if i % 2 == 0:
            matrix_identity = matrixcalc.matrix_addition(matrix_identity, matrixn)
        else:
            matrix_identity = matrixcalc.matrix_substraction(matrix_identity, matrixn)
    return matrix_identity

def sinus(matrix):
    matrix_identity = matrix
    for i in range(1, 50):
        fact = math.factorial(2 * i + 1)
        matrixpow = matrixcalc.matrix_power(matrix, 2 * i + 1)
        matrixn = matrixcalc.matrix_division(matrixpow, fact)
        if i % 2 == 0:
            matrix_identity = matrixcalc.matrix_addition(matrix_identity, matrixn)
        else:
            matrix_identity = matrixcalc.matrix_substraction(matrix_identity, matrixn)
    return matrix_identity

def cosinush(matrix):
    matrix_identity = matrixcalc.create_matrix_identity(len(matrix))
    for i in range(1, 50):
        fact = math.factorial(2 * i)
        matrixpow = matrixcalc.matrix_power(matrix, 2 * i)
        matrixn = matrixcalc.matrix_division(matrixpow, fact)
        matrix_identity = matrixcalc.matrix_addition(matrix_identity, matrixn)
    return matrix_identity

def sinush(matrix):
    matrix_identity = matrix
    for i in range(1, 50):
        fact = math.factorial(2 * i + 1)
        matrixpow = matrixcalc.matrix_power(matrix, 2 * i + 1)
        matrixn = matrixcalc.matrix_division(matrixpow, fact)
        matrix_identity = matrixcalc.matrix_addition(matrix_identity, matrixn)
    return matrix_identity

def expo(matrix):
    matrix_identity = matrixcalc.create_matrix_identity(len(matrix))
    for i in range(1, 50):
        fact = math.factorial(i)
        matrixpow = matrixcalc.matrix_power(matrix, i)
        matrixn = matrixcalc.matrix_division(matrixpow, fact)
        matrix_identity = matrixcalc.matrix_addition(matrix_identity, matrixn)
    return matrix_identity
