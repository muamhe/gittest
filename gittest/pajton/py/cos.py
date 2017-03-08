#!/usr/bin/env python
# -*- coding:utf-8 -*-

def wczytajNominaly():
    global liczbaNominalow
    liczbaNominalow = int(raw_input("Podaj liczbę nominalów: "))
    for i in range(liczbaNominalow):
        nominal=int(raw_input())
        nominaly.append(nominal)
    nominaly.sort(reverse=True)

    print nominaly
    return 0;

def znajdzReszte(reszta):
    aktualnyNominal =0
    print "Wypłacone nominały:"
    while reszta>0 and aktualnyNominal < liczbaNominalow:
        while aktualnyNominal < liczbaNominalow and reszta < nominaly[aktualnyNominal]:
            aktualnyNominal+=1
        if aktualnyNominal < liczbaNominalow and reszta >= nominaly[aktualnyNominal]:
            liczbaBanknotow = reszta/nominaly[aktualnyNominal]
            reszta -= liczbaBanknotow*nominaly[aktualnyNominal]
            print "{}x{}zł".format(liczbaBanknotow, nominaly[aktualnyNominal])

    if reszta > 0:
        print "Brak nominałów do wydania pozostałej kwoty {}zł".format(reszta)

nominaly = []
liczbaNominalow = 0
wczytajNominaly()
cena= int(raw_input("podaj cene: "))
while True:
    wplata = int(raw_input("Podaj wpłate: "))
    if wplata > cena:
        break
znajdzReszte(wplata-cena)
