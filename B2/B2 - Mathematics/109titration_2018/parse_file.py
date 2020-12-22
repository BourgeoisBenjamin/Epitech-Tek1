#!/usr/bin/python3
#-*-coding:Utf-8 -*

import sys

def read_file(file):
    tab = file.readlines()
    if (len(tab) < 3):
        sys.exit(84)
    try:
        for i in range(len(tab)):
            tab[i] = tab[i].strip('\n')
            tab[i] = tab[i].split(';')
            tab[i][0] = float(tab[i][0])
            tab[i][1] = float(tab[i][1])
            if len(tab[i]) != 2:
                print("Invalid line : %s" % tab[i], file=sys.stderr)
                sys.exit(84)
            if (tab[i][0] < 0 or tab[i][1] < 0):
                print("Invalid line : %s" % tab[i], file=sys.stderr)
                sys.exit(84)
    except (ValueError, IndexError):
        print("Invalid line : %s" % tab[i], file=sys.stderr)
        sys.exit(84)
    else:
        return tab

def parse_file():
    try:
        with open(sys.argv[1]) as file:
            tab = read_file(file)
    except (PermissionError, FileNotFoundError) as e:
        print("Error:", e, file=sys.stderr)
        sys.exit(84)
    return tab
