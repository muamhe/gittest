#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Szyfr Virgenea
# Kamil Sudoł

def szyfruj_vigenere(tekst, klucz):
    szyfrogram = ''
    i = 0
    for x in tekst:
        wartosc1 = ord(x.upper()) - 64

        if i > len(klucz) - 1:
            i = 0
        wartosc2 = ord(klucz[i].upper()) - 64

        i += 1
        wartosc3 = wartosc1 + wartosc2
        if wartosc3 > 26:
            wartosc3 -= 26
        szyfrogram += chr(wartosc3 + 64)
    return szyfrogram


def main(args):
    tekst = raw_input("Podaj tekst do zaszyfrowania: ")
    klucz = raw_input("Podaj klucz: ")
    print szyfruj_vigenere(tekst, klucz)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))