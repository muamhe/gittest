#! /usr/bin/env python
# -*- coding: utf-8 -*-

import rg


class Robot:


    def act(self, game):
        # funkcja zwróci prawdę, jeżeli "poz" wskazuje punkt wejścia
        #rodzaje pol 'spaw' 'normal' 'obstacle' 'invalid'
        #rg.loc_types() zraca typ pola
        def czy_wejscie(poz):
            if 'spawn' in rg.loc_types(poz):
                return True
            return False

        #return ['guard']
        #ilu_wrogow = 0
        #return ['move', ()]
        lista_wrogow_obok = []
        for poz, robot in game.robots.iteritems():
            if robot.player_id != self.player_id: #rozpoznanie wroga
                #print(rg.dist(poz, self.location))
                if rg.dist(poz, self.location) <= 1: #rg.dist odleglosc pomiedzy pomiedzy dwoma lokalizacjami
                    lista_wrogow_obok.append(poz)
                    #return ['attack', poz]
        print(lista_wrogow_obok)
        if len(lista_wrogow_obok) > 2 and self.hp < 27:
            return['suicide'] # samobojstwo
        elif len(lista_wrogow_obok):
            return['attack', lista_wrogow_obok[0]]
        print(game.robots)

        #if self.location == rg.CENTER_POINT:
            #return ['guard']

        dystansCP = rg.wdist(self.location, rg.CENTER_POINT)

        if dystansCP > 6:
        #if czy_wejscie(self.poz):
        # idź do środka planszy, ruch domyślny
            return ['move', rg.toward(self.location, rg.CENTER_POINT)] # rg.toward najkrotsza odleglosc
        return ['guard']

