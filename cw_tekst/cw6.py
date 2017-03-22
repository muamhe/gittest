#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#cwiczenie 6
#

def zliczaj(tekst):
    znaki_biale=""
    male=""
    duze=""
    cyfry=""
    for x in tekst:
        if ord(x) > 64 and ord(x) <91:
            duze+=x


        if ord(x) > 96 and ord(x) < 123:
            male+=x
        if ord(x) > 47 and ord(x) < 58:
            cyfry+=x
        else:
            znaki_biale += x
    print "Male litery: "
    print len(male)
    print "Duze litery: "
    print len(duze)
    print "Cyfry: "
    print len(cyfry)
    print "Biale znaki: "
    print len(znaki_biale)






def main(args):
    tekst= raw_input("Podaj tekst: ")
    zliczaj(tekst)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
