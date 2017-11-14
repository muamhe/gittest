#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwertuj(liczba, podstawa):
    reszty = [] # pusta lista

    while liczba != 0:
        reszty.append(liczba % podstawa)`
        liczba = liczba / podstawa
        pass

    reszty.reverse()
    return reszty
    print reszty

def main(args):
    numery={10:'A',11:'B',12:'C',13:'D',14:'E',15:'F'} #slownik znakow representyhacych cyfry wieksze od 9

    liczba10 = int(raw_input("Podaj liczbę: "))
    podst = int(raw_input("Podaj podstawę: "))

    liczbaK=konwertuj(liczba10, podst)
    liczbaK=[numery[x] if x >9  else x for x in liczbaK]
    print "".join([str(x) for x in liczbaK])

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
