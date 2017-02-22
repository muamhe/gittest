#!/usr/bin/env python
# -*- coding: utf-8 -*-

def pobierzimie():
    imie = raw_input("Imie: ")
    if len(imie.strip())==0 or not imie.isalpha():   #imie z samych spacji
        imie="Nieznajomy"
    elif imie[0].islower():
        imie=imie[0].upper()+imie[1:]  #imie z duzej litery
    return imie

def pobierzwiek(teraz):
    """Funkcja pobiera i sprawdza podany przez uzytkownika wiek"""
    wiek = raw_input("Ile masz lat? ")
    if wiek.isdigit() and int(wiek)>= 18 and int(wiek) <80:
        rok_urodzenia=teraz-int(wiek)
    else:
        print "Bledny wiek. Spadaj."
        wiek=0
        rok_urodzenia=teraz
    return wiek, rok_urodzenia



def kimjestes():
    """Rozmowa z Pythonem"""
    teraz = 2016 #biezacy rok
    rok_pythona= 1991 #rok powstania pajtona
    wiek_pythona = teraz-rok_pythona

    imie=pobierzimie()
    wiek,rok_urodzenia=pobierzwiek(teraz)

    print "Czesc", imie, "Jestem Python!"
    print "Urodziles sie w %s roku." % rok_urodzenia
    print "Powstalem w %s roku i  mam %s lat" %(rok_pythona,wiek_pythona)

    if wiek_pythona > int(wiek):
        print "Jestem starszy :D:D:D"
    elif wiek_pythona==int(wiek):
        print "Ooooo mamy tyle samo lat ziom B) B)"
    else:
        print "Jestem mlodszy :CCCCC"

kimjestes()


#~def main(args):
    #~return 0
#~if __name__ == '__main__':
    #~import sys
    #~sys.exit(main(sys.argv))
