#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# cwiczenie 5

def zamien(tekst):
    tab=""
    for znak in tekst:
        if ord(znak)>90:
            tab += znak.upper()

        else:
            tab += znak.lower()

    print tab


def main(args):
    tekst = raw_input("Podaj tekst: ")
    zamien(tekst)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
