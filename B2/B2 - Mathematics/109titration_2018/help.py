#!/usr/bin/python3
#-*-coding:Utf-8 -*

import sys

def display_help():
    print("USAGE")
    print("    ./109titration file\n")
    print("DESCRIPTION")
    print('    file    a csv file containing "vol;ph" lines\n')
    sys.exit(0)

def display_usage():
    print("Wrong argument. Type ./109titration -h to see usage")
    sys.exit(84)
