#!/usr/bin/env python3
##
## EPITECH PROJECT, 2019
## EPYTODO
## File description:
## init
##

from flask import Flask
import os

app = Flask(__name__)
app.config.from_object('config')
app.secret_key = os.urandom(12)

from app import views
