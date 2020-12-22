#!/usr/bin/python3
#-*-coding:Utf-8 -*

import sys
from help import *

def try_open_file():
    try:
        with open(sys.argv[1]) as file:
            return
    except (PermissionError, FileNotFoundError) as e:
        print("Error:", e, file=sys.stderr)
        sys.exit(84)

def check_error():
    if (len(sys.argv) != 2):
        display_usage()
    if (len(sys.argv) == 2):
        if (sys.argv[1] == "-h"):
            display_help()
        else:
            try_open_file()
