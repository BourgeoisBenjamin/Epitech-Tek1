#!/usr/bin/python3
#-*-coding:Utf-8 -*

import math

def product(x, constant):
    result = 1
    if x == 0:
        return result
    for i in range(constant + 1):
        result *= math.sin(x / (2 * i + 1)) / (x / (2 * i + 1))
    return result

def midpoint(constant):
    result = 0
    print("Midpoint:")

    for i in range(10000):
        result = result + product(i * 0.5, constant)
    result = result * 0.5

    print(  "I%d = %.10f" %(constant, result))
    print("diff = %.10f\n" %(abs(result - (math.pi / 2))))
    #methode des rectangles
    #result *= pas * f(i + pas/2)


def trapezoid(constant):
    result = 0
    print("Trapezoidal:")
    for i in range(1, 10000):
        result = result + product(i * 0.5, constant)
    result = result * 2
    result = result + product(0, constant) + product(5000, constant)
    result = result * (0.5 / 2)
    print("I%d = %.10f" %(constant, result))
    print("diff = %.10f\n" %(abs(result - (math.pi / 2))))

def simpson(constant):
    print("Simpson:")
    result1 = 0
    result2 = 0
    result3 = 0

    for i in range(1, 10000):
        result1 = result1 + product(i * 0.5, constant)

    for i in range(0, 10000):
        result2 = result2 + product(i * 0.5 + 0.25, constant)

    result3 = (((result1 * 2) + (result2 * 4) + product(0, constant) + product(5000, constant)) * (0.5 / 6))
    print("I%d = %.10f" %(constant, result3))
    print("diff = %.10f" %(abs(result3 - (math.pi / 2))))
    #methode simpson
    #g(x) = ax² + bx + c
    #3 points :x, x + pas/2, x + pas
    #ih = x
    #pas = h
    #de 0 a 5000 : f(x) dx = (5000 / - * 10000) * (f(0) + f(5000) + 2 * somme i = 1 a 9999 f(ih) + 4 *somme i= 1 a 9999 f(ih + h/2))


#i = 1 a 9999

#pas = (b - a) / 10000

# _-_  b : 5000 max
# |
#   |     integrale
# -_-  a
