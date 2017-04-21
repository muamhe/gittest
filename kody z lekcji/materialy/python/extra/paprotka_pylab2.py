#! /usr/bin/python2
import random

import pygame
import pygame.locals
screen = pygame.display.set_mode((600, 400), 0, 32)

i = 0
x = 1
y = 1
while i<200000:
    p = random.random()

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
    if (i>100):
        pygame.draw.circle(screen, (0,255,0), (300 + int(x*25) , 350-int(y*25)), 1,1)


pygame.draw.circle(screen, (0,255,0), (300,200), 1,1)
pygame.display.update()

import time
time.sleep(5)
