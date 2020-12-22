#!/bin/bash

if [ "$1" == "" ]; then
    wc -l
else
    grep -c ${1^^}
fi
