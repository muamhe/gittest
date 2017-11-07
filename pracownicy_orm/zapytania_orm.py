# -*- coding: utf-8 -*-

from peewee import *

baza_plik = "pracownicy.sqlite3"
baza = SqliteDatabase(baza_plik)  # ':memory:'


class BazaModel(Model):  # klasa bazowa
    class Meta:
        database = baza


class Dzial(BazaModel):
    id = IntegerField(primary_key=True)
    nazwa = CharField(null=False)
    siedziba = CharField(null=False)


class Premia(BazaModel):
    id = CharField(primary_key=True)
    premia = DecimalField()


class Pracownik(BazaModel):
    id = CharField(primary_key=True)
    nazwisko = CharField(null=False)
    imie = CharField(null=False)
    stanowisko = ForeignKeyField(Premia, related_name='pracownicy')
    data_zatr = CharField(null=False)
    placa = DecimalField(decimal_places=2)
    premia = DecimalField(decimal_places=2, default=0)
    id_dzial = ForeignKeyField(Dzial, related_name='pracownicy')


baza.connect()  # nawiązujemy połączenie z bazą

def kwerenda_c():
    query = (Dzial
            .select(Dzial.siedziba, fn.Sum(Pracownik.placa).alias('place'))
            .join(Pracownik)
            .group_by(Dzial.siedziba)
            .order_by('place').asc()
            )

    for obj in query:
        print(obj.siedziba, obj.place)

def kwerenda_d():
    query = (Pracownik
            .select(Dzial.id, Dzial.nazwa, Pracownik.imie, Pracownik.nazwisko)
            .join(Dzial)
            .order_by(Dzial.nazwa).asc()
            )

    for obj in query:
        print(obj.id_dzial.id, obj.id_dzial.nazwa, obj.imie, obj.nazwisko)


def kwerenda_e():
    query = (Pracownik
            .select()
            .join(Premia)
            )

    for obj in query:
        print(obj.imie, obj.nazwisko, obj.stanowisko.id)

kwerenda_e()
