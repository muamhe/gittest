#!/usr/bin/env python
# -*- coding: utf-8 -*-

def szyfruj_cezar(tekst,klucz):
    klucz = int(klucz) % 26
    szyfrogram = ""
    for znak in tekst:
        znak = znak.lower()
        if znak == " ":
            szyfrogram += " "
            continue
        if ord(znak) + klucz > 122:
                szyfrogram += chr(ord(znak) + klucz - 26)
        else:
                szyfrogram += chr(ord(znak) + klucz)
    return szyfrogram

def deszyfruj_cezar(szyfrogram,klucz):
    klucz = int(klucz) % 26
    tekst=""
    for znak in szyfrogram:
        znak = znak.lower()
        if znak == " ":
            tekst += " "
            continue
        if ord(znak) - klucz < 97:
                tekst += chr(ord(znak) - klucz + 26)
        else:
                tekst += chr(ord(znak) - klucz)
    return tekst

def main(args):
    tekst = raw_input("Podaj tekst: ")
    klucz = raw_input("Podaj klucz: ")
    szyfrogram = szyfruj_cezar(tekst, klucz)
    print szyfrogram
    print "Deszyfracja: "
    print deszyfruj_cezar(szyfrogram,klucz)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))