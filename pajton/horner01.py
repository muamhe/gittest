#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  horner.py
#
def horner(tabwsp, x, stopien):
    pass

def main(args):
    stopien = 3
    tabwsp = []  # pusta lista
    print "Podaj 4 współczynniki: "
    for i in range(stopien+1):
        liczba = raw_input("Podaj współczynnik: ")
        tabwsp.append(float(liczba))
    x = float(raw_input("Podj argument: "))

    print tabwsp, x
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
