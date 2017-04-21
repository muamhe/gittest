import random

import pygame
import pygame.locals
screen = pygame.display.set_mode((700, 400), 0, 32)


i = 0
x = 1
y = 1
while i<200000:
    
    p = random.random()
    if p<=0.14:
        x = 0.05*x + 0.0*y - 0.06
        y = 0.0*x + 0.4*y - 0.47
    elif p<0.20:
        x = -0.05*x + 0.0*y - 0.06
        y = 0.0*x - 0.4*y - 0.47
    elif p<0.40:
        x = 0.03*x - 0.14*y - 0.16
        y = 0.0*x + 0.26*y -0.01
    elif p<0.50:
        x = -0.03*x + 0.14*y - 0.16
        y = 0.0*x - 0.26*y -0.01
    elif p<0.70:
        x = 0.56*x + 0.44*y + 0.3
        y = -0.37*x + 0.51*y + 0.15
    elif p<0.80:
        x = 0.19*x + 0.07*y - 0.2
        y = -0.1*x + 0.15*y + 0.28
    else:
        x = -0.55*x - 0.34*y - 0.54
        y = -0.10*x + 0.37*y + 0.35

    i = i + 1
    if (i>100):
        pygame.draw.circle(screen, (0,255,0), (350 + int(x*170) , 250-int(y*170)), 1,1)

pygame.draw.circle(screen, (0,255,0), (450,300), 1,1)
pygame.display.update()


import time
time.sleep(20)
