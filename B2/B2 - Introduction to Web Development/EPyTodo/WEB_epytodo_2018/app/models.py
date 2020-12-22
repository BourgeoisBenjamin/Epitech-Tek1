#!/usr/bin/env python3
##
## EPITECH PROJECT, 2019
## EPYTODO
## File description:
## models
##

import pymysql as sql
from app import app

def connect_database():
    try:
        connect = sql.connect(host=app.config["DATABASE_HOST"],
                            unix_socket=app.config["DATABASE_SOCK"],
                            user=app.config["DATABASE_USER"],
                            passwd=app.config["DATABASE_PASS"],
                            db=app.config["DATABASE_NAME"]
        )
        database = connect.cursor()
        return (connect, database)
    except Exception as e:
        print("error during connection to the database: ", e)
        return(None, None)

def disconnect_database(connect, database):
    try:
        database.close()
        connect.close()
    except Exception as e:
        print("error during close database: ", e)

def register_user(request):
    connect, database = connect_database()
    username = request.form['name']
    password = request.form['password']
    mail = request.form['mail']
    phone = request.form['phone']
    request = "INSERT INTO user (username,password,mail,phone) VALUES (%s, %s, %s, %i)"
    result = 1
    try:
        database.execute(request, (username, password, mail, phone))
        connect.commit()
    except Exception as e:
        print("error : internal error")
        result = 0
    disconnect_database(connect, database)
    return (result)

def login_user(request):
    connect, database = connect_database()
    username = request.form['name']
    password = request.form['password']
    request = 'SELECT username FROM user WHERE username="{}" AND password="{}"'.format(username,password)
    result = 1
    user = None
    try:
        database.execute(request)
        connect.commit()
        user = database.fetchall()
    except Exception as e:
        print("error : internal error")
        result = 0
    disconnect_database(connect, database)
    return user
