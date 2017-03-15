#!/usr/bin/env python
# -*- coding: utf-8 -*-

def szyfruj_(tekst,klucz):
    i = 0
    for znak in tekst:
        wartosc1 = ord(znak.upper()) - 64
        wartosc2 = ord(klucz[i].upper()) - 64
        i += 1
        print wartosc1, wartosc2


def main(args):
    tekst = raw_input("Podaj tekst: ")
    klucz = raw_input("Podaj klucz: ")
    print szyfruj_(tekst, klucz)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
