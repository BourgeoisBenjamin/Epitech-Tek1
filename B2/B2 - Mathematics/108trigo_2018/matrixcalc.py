#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 108trigo
# =============================================================================
"""
Calcul matrix for the 108trigo project
"""
# =============================================================================
# Imports
import sys
import math
import usage
# =============================================================================

def create_matrix_identity(n):
    matrix = []
    for i in range(n):
        line = []
        for j in range(n):
            if (j == i):
                line.append(1)
            else:
                line.append(0)
        matrix.append(line)
    return matrix

def get_matrix():
    square = int(math.sqrt(len(sys.argv) - 2))
    matrix = []
    count = 2

    for i in range(square):
        line = []
        for j in range(square):
            line.append(int(sys.argv[count]))
            count += 1
        matrix.append(line)
    return matrix


def matrix_multiplication(matrix1, matrix2):
    new_matrix = []
    for i in range(len(matrix1)):
        line = []
        for j in range(len(matrix2[0])):
            a = 0
            for k in range(len(matrix1[0])):
                a += matrix1[i][k] * matrix2[k][j]
            line.append(a)
        new_matrix.append(line)
    return new_matrix


def matrix_power(matrix, n):
    new_matrix = matrix
    for i in range(n - 1):
        new_matrix = matrix_multiplication(new_matrix, matrix)
    return new_matrix


def matrix_division(matrix, k):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            matrix[i][j] /= k
    return matrix


def matrix_addition(matrix1, matrix2):
    new_matrix = []
    for i in range(len(matrix1)):
        line = []
        for j in range(len(matrix1[0])):
            line.append(matrix1[i][j] + matrix2[i][j])
        new_matrix.append(line)
    return new_matrix


def matrix_substraction(matrix1, matrix2):
    new_matrix = []
    for i in range(len(matrix1)):
        line = []
        for j in range(len(matrix1[0])):
            line.append(matrix1[i][j] - matrix2[i][j])
        new_matrix.append(line)
    return new_matrix
