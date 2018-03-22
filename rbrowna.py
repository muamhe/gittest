#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random
import numpy as np
import matplotlib.pylab as plt

def main(args):
    n = int(input("Ile ruchow: "))
    x = y = 0
    lx = [0]
    ly = [0]

    for i in range(n):
        rad = random.randint(0,360) * np.pi/180
        #print(rad)
        x = x + np.cos(rad)
        y = y + np.sin(rad)
        lx.append(x)
        ly.append(y)
    print(lx)
    print(ly)

    s = np.fabs(np.sqrt(x*x + y*y))
    print("Wektor przesuniecia: ",s)

    plt.plot((0, x),(0 ,y) color = "blue")
    plt.plot(lx, ly)
    plt.show()


    return 0





if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
