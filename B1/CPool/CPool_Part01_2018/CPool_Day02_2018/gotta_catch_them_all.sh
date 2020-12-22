#!/bin/bash

if [ $# == 1 ]; then
    grep -c " $1"
else
    echo "Error, give a name"
fi
