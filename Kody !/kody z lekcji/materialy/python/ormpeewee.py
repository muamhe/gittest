#!/usr/bin/python
# -*- coding: utf-8 -*-

from peewee import *

DATABASE = 'quiz.db'
database = SqliteDatabase(DATABASE)

class BaseModel(Model):
    class Meta:
        database = database

class Pytanie(BaseModel):
    pytanie = CharField(unique = True)
    odpok = CharField()
    
class Odpowiedz(BaseModel):
    pnr = ForeignKeyField(Pytanie, related_name='odpowiedzi', on_delete = 'CASCADE')
    odpowiedz = CharField()

def create_table():
    database.connect()
    database.create_tables([Pytanie, Odpowiedz], True)
    
create_table()


