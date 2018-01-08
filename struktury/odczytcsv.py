#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# ma robic to samo co w c++

import csv


def odczytajDane(plik, delimiter='\t'):

    with open(plik, 'r') as plikcsv:
        tresc = csv.reader(plikcsv, delimiter=delimiter)

        for rekord in tresc:
            print(rekord)



def main(args):

    plik ="osoby.txt"
    odczytajDane(plik)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
