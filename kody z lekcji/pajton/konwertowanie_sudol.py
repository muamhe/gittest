#!/usr/bin/env python
# -*- coding: utf-8 -*-


#Konwersja liczb dziesietnych na binarne za pomoca dodawania poteg
#Kamil Sudol

import collections

# x = {"potega": "i",
#     "wartosc": "2**i"
#     }
# x = collections.OrderedDict(x)


def konwertuj(liczba):
    x = collections.OrderedDict()

    for i in range(0, liczba):
        if 2 ** i > liczba:
            break
        x[i] = 2 ** i

    # print x

    string = str()
    suma = 0

    for potega in reversed(x):
        if suma + x[potega] <= liczba:
            suma = suma + x[potega]
            string += '1'
        else:
            string += '0'

    print string


def main(args):
    liczba = int(raw_input("Podaj liczbe: "))
    # podst = int(raw_input("Podaj podstawe: "))
    print "Zapis binarny:"
    konwertuj(liczba)

    return 0


if __name__ == '__main__':
    import sys

    sys.exit(main(sys.argv))
