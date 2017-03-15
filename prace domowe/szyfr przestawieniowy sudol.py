#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Szyfr przestawieniowy
# Kamil Sudoł

def usun(tekst):
    szyfrogram = ""
    for znak in tekst:
        znak = znak.upper()
        if znak == " ":
            szyfrogram += ""
        else:
            szyfrogram += znak
    return szyfrogram

def szyfruj(szyfrogram, klucz):
    i = 0
    j = 1
    szyfr = ""
    for x in szyfrogram:
        if i < len(szyfrogram):
            szyfr += szyfrogram[i]
            i += int(klucz)
        else:
            i = j
            j += 1

            szyfr += szyfrogram[i]
            i += int(klucz)

        # print 'I:' + str(i) + str(j)
        # print szyfr

    return szyfr


def main(args):
    tekst = raw_input("Podaj tekst do zaszyfrowania: ")
    klucz = raw_input("Podaj klucz do zaszyfrowania: ")
    szyfrogram = usun(tekst)
    # print szyfrogram

    szyfr = szyfruj(szyfrogram, klucz)
    print "Szyfr: "
    print szyfr

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))