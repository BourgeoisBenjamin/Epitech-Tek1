#!/bin/bash

if [$1 == ""]
then
	echo "Provide description"
else
	git add .
	git commit -m '$*'
	git push origin master
fi
