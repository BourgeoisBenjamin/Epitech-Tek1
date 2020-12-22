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
import matplotlib.pyplot as plt 
# =============================================================================

def next_gen(x, k):
    return (k * x * ((1000 - x) / 1000))

def calcul_option_1(n, k):
    tabx = []
    taby = []
    for i in range(1, 101):
            print(i, "%0.2f" % (n), sep=" ")
            tabx.append(i)
            taby.append(n)
            n = next_gen(n, k)
    # x axis values 
    x = [1,2,3] 
    # corresponding y axis values 
    y = [2,4,1]   
    # plotting the points  
    plt.plot(x, y) 
    # naming the x axis 
    plt.xlabel('x - axis') 
    # naming the y axis 
    plt.ylabel('y - axis') 
  
    # giving a title to my graph 
    plt.title('My first graph!') 
  
    # function to show the plot 
    plt.show() 

def calcul_option_2(n, i0, i1):
    k = 1.00;
    while (k <= 4):
        for i in range(1, i0 + 1):
            n = next_gen(n, k)
        for i in range(i0, i1 + 1):
            print("%0.2f %0.2f" % (k, n))
            n = next_gen(n, k)
        k += 0.01
    for i in range(i0, i1 + 1):
        print("|")
    for i in range(0, 40):
        print("-", end="")
    print("\n")
    for i in range(0, 40):
        if (i % 10 == 0):
            print((i / 10) + 1, end="")
        else:
            print(" ", end="")