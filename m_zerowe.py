#!/usr/bin/env python
# -*- coding: utf-8 -*-

import numpy as np
import matplotlib.pylab as plt


def fun(x):
    return 3 * x**2 - 4 * x


def wykres(a, b, d):
    lx = np.arange(a, b + d, d)
    ly = [fun(i) for i in lx]

    plt.plot(lx, ly, color='g')
    plt.grid()
    plt.axhline(y=0, color='k')
    plt.axvline(x=0, color='k')
    plt.axvline(x=a, color='y')
    plt.axvline(x=b, color='y')
    plt.show()


def m_zerowe(a, b, d):
    c = (a + b) / 2
    while b - a > d and fun(a) is not 0 and fun(b) is not 0:
        c = (a + b) / 2
        if fun(a) + fun(b) < 0:
            b = c
        else:
            a = c

    if fun(a) == 0:
        return a
    if fun(b) == 0:
        return b

    return c



def main(args):
    a = b = 0
    while fun(a) * fun(b) > 0 or a >= b:
        a = float(input("Podaj lewy kraniec przedzialu: "))
        b = float(input("Podaj prawy kraniec przedzialu: "))
    dokladnosc = float(input("Podaj dokladnosc: "))


    print("Przyblizona wartosc miejsca zerowego: {:.8f}".format(m_zerowe(a, b ,dokladnosc)))
    wykres(a, b, dokladnosc)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
