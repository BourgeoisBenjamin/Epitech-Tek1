#!/usr/bin/python3
#-*-coding:Utf-8 -*

def calcul_derivation1(tab):
    first_deriv_result = []
    higher = 0
    print("Derivative:")
    for i in range(0, len(tab) - 2):
        first_deriv_result.append((tab[i + 2][1] - tab[i][1]) / (tab[i + 2][0] - tab[i][0]))
        if (first_deriv_result[i] > first_deriv_result[higher]):
            higher = i + 1
        print("%.1f ml -> %.2f" % (tab[i + 1][0], first_deriv_result[i]))
    print("\nEquivalent point at %.1f ml\n" % (tab[higher][0]))
    return first_deriv_result, higher

def calcul_derivation2(tab, first_deriv_result, higher):
    second_deriv_result = []
    print("Second derivative:")
    for i in range(0, len(first_deriv_result) - 2):
        second_deriv_result.append((first_deriv_result[i + 2] - first_deriv_result[i]) / (tab[i + 3][0] - tab[i + 1][0]))
        print("%.1f ml -> %.2f" % (tab[i + 2][0], second_deriv_result[i]))
    return second_deriv_result

def calcul_a(deriv_result, tab, equi):
    print("equi : %d" % (equi))
    print("(%.1f - %.1f) / (%.1f - %.1f)" % (deriv_result[equi], deriv_result[equi - 1], tab[equi][0], tab[equi - 1][0]))
    return ((deriv_result[equi] - deriv_result[equi - 1]) / (tab[equi][0] - tab[equi - 1][0]))

def calcul_b(deriv_result, tab, equi, a):
    return (deriv_result[equi - 1] - a * tab[equi - 1][0])

def calcul_derivation_estimated(tab, second_deriv_result, equi):
    count = tab[equi - 1][0]
    print("\nSecond derivative estimated:")
    a = calcul_a(second_deriv_result, tab, equi)
    b = calcul_b(second_deriv_result, tab, equi, a)
    while (count < tab[equi + 1][0]):
        a = calcul_a(second_deriv_result, tab, equi)
        b = calcul_b(second_deriv_result, tab, equi, a)
        print("%.1f ml -> %.1f" %(count, a * count + b))
        count += 0.1
