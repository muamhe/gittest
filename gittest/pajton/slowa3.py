#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Zgadnij słowa
#

import os
import json
from random import randint

def pobierzSlowa():
    """Funkcja pobiera od użytkownika kolejne słowa i dodaje do listy"""
    slowa = []  # pusta lista
    ile = int(raw_input("Ile słów podasz?"))
    for i in range(ile):
        slowo = raw_input("Podaj słowo: ")
        slowa.append(slowo.strip().lower())

    return slowa


def zapiszDane(dane, plik):
    """Funkcja zapisuje podaną listę w pliku w formacie json"""
    plik = open(plik, "w")
    json.dump(dane, plik)
    plik.close()


def wczytajDane():
    """Funkcja wczytuje listę w formacie json z podanego pliku"""
    dane = []
    nazwa = raw_input("Podaj nazwę pliku lub naciśnij Enter dla nowej listy: ")
    if os.path.isfile(nazwa):
        plik = open(nazwa, "r")
        dane = json.load(plik)
        plik.close()
    elif nazwa:
        print "Plik nie istnieje"

    return dane

def pokazSlowa(slowa):
    """Funkcja drukuje pobraną listę słów"""
    #~for i in range(len(slowa)):
        #~print slowa[i]
    for slowo in slowa:
        print slowo

def losujSlowo(slowa):
    """Funkcja losuje słowo z podanej listy"""
    i = randint(0, len(slowa) - 1)
    return slowa[i]


def main(args):
    slowa = wczytajDane()
    if not slowa:
        slowa = pobierzSlowa()  # pobranie listy słów od użytkownika
        zapiszDane(slowa, "slowa.txt")
    pokazSlowa(slowa)
    slowo = losujSlowo(slowa)
    slowa.remove(slowo)
    print
    pokazSlowa(slowa)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
