#!/usr/bin/python3
#-*-coding:Utf-8 -*

import sys
import math
from usage import *
from verif import *
from calcul import *

def main():
    check_arg()
    constant = get_constant()
    midpoint(constant)
    trapezoid(constant)
    simpson(constant)
    return (0)

if __name__ == '__main__':
    main()
    sys.exit(0)
