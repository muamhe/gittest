#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sqlite3

def wyniki(cur):
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))

def kw_a(cur):
    cur.execute("""
        SELECT Imie, Nazwisko, tbKlasy.Klasa
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """)
    
    wyniki(cur)
        
def kw_b(cur):
    cur.execute("""
        SELECT MAX(EgzHum)
        FROM tbUczniowie
    """)
    
    wyniki(cur)
    
def kw_c(cur):
    cur.execute("""
        SELECT AVG(EgzMat)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """)

    wyniki(cur)
    
def kw_d(cur):
    cur.execute("""
        SELECT Imie, Nazwisko, Ocena
        FROM tbUczniowie, tbOceny
        WHERE tbOceny.UczenID = tbUczniowie.IDUcznia
        AND tbUczniowie.Imie = 'Dorota'
        AND tbUczniowie.Nazwisko = 'Nowak'
    """)
    
    wyniki(cur)
    
def kw_e(cur):
    cur.execute("""
        SELECT AVG(tbOceny.Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        AND tbOceny.Datad > '2012-09-31'
        AND tbOceny.Datad < '2012-11-01'
        
    """)
    
    wyniki(cur)
    
def kw_jakas(cur): #szukanie w datach na skroty
    cur.execute("""
        SELECT Datad
        FROM tbOceny
        WHERE striftime('%Y-%m',datad) LIKE '2012-10'
    """)
    
    wyniki(cur)
    
def kw_lepsze_e(cur):
    cur.execute("""
        SELECT AVG(Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE strftime('%Y-%m',datad) LIKE '2012-10'
        AND tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        
    """)
    
    wyniki(cur)

def main(args):
    
    con = sqlite3.connect('szkola.db')
    cur = con.cursor()
    con.row_factory = sqlite3.Row
    
    kw_lepsze_e(cur)
    
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
