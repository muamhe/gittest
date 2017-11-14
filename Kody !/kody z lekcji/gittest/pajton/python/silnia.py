#!/usr/bin/env python
# -*- coding: utf-8 -*-

def silnia(liczba):
    wynik = 1
    for i in range(1,liczba+1):
        wynik=wynik*i
    return wynik

def sil_rek(liczba):
    if(liczba==0):
        return 1
    else:
        return sil_rek(liczba-1)*liczba





def main(args):

    liczba =int(raw_input("Podaj liczbe: "))

    print "sil_it(%s) = %s " % (liczba,silnia(liczba))
    print "sil_rek(%s) = %s " % (liczba,sil_rek(liczba))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
