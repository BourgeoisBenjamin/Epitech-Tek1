#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 107transfer
# =============================================================================
"""
Usage function for the 107transfers project
"""
# =============================================================================
# Imports
import sys
# =============================================================================

def display_help():
    print("USAGE")
    print("\t./107transfer [num den]*\n")
    print("DESCRIPTION")
    print("\tnum\tpolynomial numerator defined by its coefficients")
    print("\tden\tpolynomial denominator defined by its coefficients")
    sys.exit(84)

def display_usage():
    print("Wrong argument. Type ./107transfer -h to see usage")
    sys.exit(84)
