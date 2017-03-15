#!/usr/bin/env python
# -*- coding: utf-8 -*-

def horner(stopien, tabwsp, x):
    wynik = tabwsp[0]
    for i in range(1,4):
        wynik = wynik*x + tabwsp[i]
    return wynik


def main(args):
    stopien = 3
    x = float(raw_input("Podaj x: "))
    tabwsp=[] #pusta lista
    for i in range(4):
        w=float(raw_input("wspolczynnik %s: " %i))
        tabwsp.append(w)
    print x, tabwsp
    print "wynik: ", horner(stopien, tabwsp, x)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
