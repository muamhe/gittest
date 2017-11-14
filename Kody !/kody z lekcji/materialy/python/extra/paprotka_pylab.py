#! /usr/bin/python2
from pylab import *
import random
i = 0
x = 1
y = 1
while i<2000:
    p = random.random()
#  print p
    if p<0.01:
        x = 0.0*x + 0.0*y + 0.0
        y = 0.0*x + 0.16*y + 0.0
    elif p<0.88:
        x = 0.85*x + 0.04*y + 0.0
        y = -0.04*x + 0.85*y + 1.6
    elif x<0.95:
        x = 0.2*x - 0.26*y + 0.0
        y = 0.23*x + 0.22*y + 1.6
    else:
        x = -0.15*x + 0.28*y + 0.0
        y = 0.26*x + 0.24*y + 0.44
    i = i + 1
    plot([x],[y],'ro')

savefig('wykres.png')
pylab.show()
