#!/usr/bin/env python3
##
## EPITECH PROJECT, 2019
## EPYTODO
## File description:
## views
##

from app import *
import pymysql as sql
from flask import render_template
from flask import jsonify,request,session
from app import models

@app.route('/', methods = ['GET'])
def route_home():
    if not session.get('logged_in'):
        return render_template('login.html')
    else:
        return render_template('index.html')

@app.route('/register', methods = ['POST'])
def route_register():
    if models.register_user(request):
        session['logged_in'] = True
    return route_home()

@app.route('/signin', methods = ['POST'])
def route_signin():
    user = models.login_user(request)
    if (user is None):
        return render_template('login.html')
    else:
        session['logged_in'] = True
        return render_template('index.html', username=user[0][0])

@app.route('/signout', methods = ['POST'])
def route_signout():
    session['logged_in'] = False
    return (route_home())

@app.route('/user', methods = ['GET'])
def route_user_info():
    return

@app.route('/user/task', methods = ['GET'])
def route_user_all_task():
    return

@app.route('/user/task/<int:task_id>', methods = ['GET'])
def route_user_special_task(task_id):
    return

@app.route('/user/task/<int:task_id>', methods = ['POST'])
def route_update_task(task_id):
    return

@app.route('/user/task/add', methods = ['POST'])
def route_create_task():
    return

@app.route('/user/task/del/<int:task_id>', methods = ['POST'])
def route_delete_task(task_id):
    return
