#!/bin/bash

if [ -n "$MY_LINE1" ] && [ -n "$MY_LINE2" ]; then  
     sed '1~2d' | cut -d: -f1 | rev | sort -rd | sed -n $MY_LINE1','$MY_LINE2'p' | sed -z 's/\n/, /g' | sed 's/..$/.\n/g'
else
    echo "environment variables missing"
fi
