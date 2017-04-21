#! /usr/bin/env python
# -*- coding: utf-8 -*-

import sys, os
from peewee import *

if os.path.exists('test.db'):
    os.remove('test.db')
# tworzymy instancję bazy peewee używanej przez modele
baza = SqliteDatabase(':memory:') # 'test.db'

# klasa bazowa
class BazaModel(Model):
    class Meta:
        database = baza

# modele Klasa i Uczen odzwierciedlają rekordy tabel "klasa" i "uczen"
class Klasa(BazaModel):
    nazwa = CharField(null=False)
    profil = CharField(default="")

# model Uczen odzwierciedla zawartość rekordu tabeli "uczen"
class Uczen(BazaModel):
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    klasa = ForeignKeyField(Klasa, related_name = 'uczniowie')

# tworzymy tabele
baza.connect()
baza.create_tables([Klasa, Uczen],True) # przed utworzeniem tabel sprawdzamy czy istnieją
