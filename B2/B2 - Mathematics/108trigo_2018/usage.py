#!/usr/bin/python3
#-*-coding:Utf-8 -*
# =============================================================================
# Created By  : Benjamin Bourgeois (benjamin.bourgeois@epitech.eu) - Romain Jolidon (romain.jolidon@epitech.eu)
# PROJECT : Maths - 108trigo
# =============================================================================
"""
Usage function for the 108trigo project
"""
# =============================================================================
# Imports
import sys
# =============================================================================

def display_help():
    print("USAGE")
    print("\t./108trigo fun a0 a1 a2 ...\n")
    print("DESCRIPTION")
    print("\tfun\tfunction to be applied, among at least “EXP”, “COS”, “SIN”, “COSH”\n\t\tand “SINH”")
    print("\tdai\tcoeficients of the matrix")

def display_usage():
    print("Wrong argument. Type ./108trigo -h to see usage")
