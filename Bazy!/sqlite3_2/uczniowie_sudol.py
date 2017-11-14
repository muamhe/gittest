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
    
    
def e(cur):
    cur.execute("""
        SELECT AVG(Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE strftime('%Y-%m',datad) LIKE '2012-10'
        AND tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        
    """)
    
    wyniki(cur)

def dodaj(cur):
    cur.execute("""
        INSERT INTO tbKlasy
        VALUES (?,?,?,?)
    """, [None, '3C', 2015, 2018])
    
def aktualizuj(cur):
    cur.execute("""
        UPDATE tbKlasy
        SET klasa = ?
        WHERE IDKlasy = ?
    """, ['3D',13])

def usun(cur):
    cur.execute('DELETE FROM tbKlasy WHERE klasa = ? AND RokNaboru = ?', ['3B',2015] )
       
def zmien(cur):
    cur.execute("""
        UPDATE tbUczniowie
        SET EgzJez= ?
        WHERE Imie = ?
        AND Nazwisko = ?
    """, [35,'Paulina', 'Dziedzic'])
    
#def popraw(cur):
 
    

def main(args):
    
    con = sqlite3.connect('szkola.db')
    cur = con.cursor()
    con.row_factory = sqlite3.Row
    
    #dodaj(cur)
    #aktualizuj(cur)
    #usun(cur)
    zmien(cur)
    con.commit()
    wyniki(cur.execute('SELECT * FROM tbUczniowie  '))
    #wyniki(cur.execute('SELECT * FROM tbKlasy'))
    
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
