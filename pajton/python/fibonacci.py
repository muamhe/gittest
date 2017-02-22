#!/usr/bin/env python
# -*- coding: utf-8 -*-

def fibonacci(n):
    wynik = 0
    a=0
    b=1
    for i in range(0,n-1):
        wynik=a+b
        a=b
        b=wynik
    return wynik


def fib_rek(n):
    if(n==0):
        return 0
    if(n==1):
        return 1
    return fib_rek(n-1)+fib_rek(n-2)


def main(args):

    n =int(raw_input("Podaj liczbe: "))

    print "Fibonacci: ", fibonacci(n)
    print "Fibonacci rekurencyjny: ", fib_rek(n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
