#!/usr/bin/env python
# -*- coding: utf-8 -*-


#~def main(args):
    #~return 0

#~if __name__ == '__main__':
    #~import sys
    #~sys.exit(main(sys.argv))

imie = raw_input("Imie: ")
print "Czesc", imie, "Jestem Python!"

wiek = raw_input("Ile masz lat? ")
teraz = 2016
rok_urodzenia=teraz-int(wiek)
print "Ahahahahah! XDDDDDDDDDDDD Urodziles sie w %s roku. XDDDD" % rok_urodzenia

rok_pythona= 1991
wiek_pythona = teraz-rok_pythona
print "Powstalem w %s roku i  mam %s lat" %(rok_pythona,wiek_pythona)

if wiek_pythona > int(wiek):
    print "Jestem starszy :D:D:D"
elif wiek_pythona==int(wiek):
    print "Ooooo mamy tyle samo lat ziom B) B)"
else:
    print "Jestem mlodszy :CCCCC"

