#!/bin/bash

blih -u benjamin.bourgeois@epitech.eu repository create $1
blih -u benjamin.bourgeois@epitech.eu repository setacl $1 ramassage-tek r
blih -u benjamin.bourgeois@epitech.eu repository getacl $1
