#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 106bombix
# =============================================================================
"""
Usage function for the 106bombyx project
"""
# =============================================================================
# Imports
import sys
# =============================================================================

def display_help():
    print("USAGE")
    print("\t./106bombix n [k | i0 i1]\n")
    print("DESCRIPTION")
    print("\tn\tnumber of first generation individuals")
    print("\tk\tgrowth rate from 1 to 4")
    print("\ti0\tinitial generation (included)")
    print("\ti1\tfinal generation (included)")

def display_usage():
    print("Wrong argument. Type ./106bombix -h to see usage")
