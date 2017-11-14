#! /usr/bin/python2
import pygame
import pygame.locals
surface = pygame.display.set_mode((800, 400), 0, 32)
pygame.display.set_caption('Trojkat')
background = (230, 255, 255)
color = (0, 0, 0)
surface.fill(background)

def narysuj_trojkat (wspolrzedne, color = (0, 0, 0)):
    trojkat = pygame.draw.polygon(surface, color, wspolrzedne, 0)
    surface.blit(surface, trojkat)

narysuj_trojkat([(0, 0), (0, 200), (100, 100)])
narysuj_trojkat([(0, 0), (0, 100), (100, 100)], (40,40,140))
#narysuj_trojkat([(200, 100), (200, 200), (100, 300)])

pygame.display.update()

import time
time.sleep(5)
