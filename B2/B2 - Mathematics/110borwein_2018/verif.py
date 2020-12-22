#!/usr/bin/python3
#-*-coding:Utf-8 -*

import sys
import math
from usage import *

def check_arg():
    if (len(sys.argv) != 2):
        print("Error. Type -h to see usage")
        sys.exit(84)
    if (sys.argv[1] == "-h"):
        display_usage()
        sys.exit(0)

def get_constant():
    try:
        constant = int(sys.argv[1])
    except:
        print("Error. Type -h to see usage")
        sys.exit(84)
    if (constant < 0):
        print("Error. Type -h to see usage")
        sys.exit(84)
    return constant
