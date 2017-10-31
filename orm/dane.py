#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# dane

import csv

def dane_z_pliku(plik,delimiter='\t'):
    dane = [] #pusta lista
    with open(plik, 'r') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=delimiter)
    
        for rekord in tresc:
            dane.append(rekord)
        
    return dane
    
def wyczysc_dane(dane,pole):
    for i, rekord in enumerate(dane):
        el = rekord[pole]
        el = el.replace('zł','')
        el = el.replace(' ','')
        el = el.replace(',','.')
        rekord[pole]=el
        dane[i]=rekord
        
    return dane
    
def wstaw_premie(dane, stawki = None):
    premia = ""
    for i, rekord in enumerate(dane):
        premia = float(rekord[5]) * float(stawki[rekord[3]])
        rekord.append(premia)
        dane[i] = rekord
    return dane
        

def main(args):
    
    
    premia = dane_z_pliku('premia.txt')
    premia = wyczysc_dane(premia,1)
    
    dzial = dane_z_pliku('dział.txt')
    
    pracownicy = dane_z_pliku('pracownicy.txt')
    pracownicy = wyczysc_dane(pracownicy,5)
    pracownicy = wstaw_premie(pracownicy, dict(premia))
    print(pracownicy)
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
