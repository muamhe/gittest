#! /usr/bin/env python
# -*- coding: utf-8 -*-

import rg


class Robot:

    def act(self, game):
        # funkcja zwróci prawdę, jeżeli "poz" wskazuje punkt wejścia
        # rodzaje pol 'spaw' 'normal' 'obstacle' 'invalid'
        # rg.loc_types() zraca typ pola

        def czy_wejscie(poz):
            if 'spawn' in rg.loc_types(poz):
                return True
            return False

         def czy_wrog(poz):
            if game.robots.get(poz) is not None:
                if game.robots[poz].player_id != self.player_id:
                    return True
            return False


            # funkcja zwróci prawdę, jeżeli w odległości 2 kroków z przodu jest wróg
        def zprzodu(l1, l2):
            if rg.wdist(l1, l2) == 2:
                if abs(l1[0] - l2[0]) == 1:
                    return False
                else:
                    return True
            return False

        # return ['guard']
        #ilu_wrogow = 0
        # return ['move', ()]
        lista_wrogow_obok = []
        for poz, robot in game.robots.iteritems():
            if robot.player_id != self.player_id:  # rozpoznanie wroga
                #print(rg.dist(poz, self.location))
                # rg.dist odleglosc pomiedzy pomiedzy dwoma lokalizacjami
                if rg.dist(poz, self.location) <= 1:
                    lista_wrogow_obok.append(poz)
                    # return ['attack', poz]


        if czy_wejscie(self.poz):

            return ['move', rg.toward(self.location, rg.CENTER_POINT)]

        # funkcja zwróci współrzędne pola środkowego między dwoma innymi
        # oddalonymi o 2 kroki
        def miedzypole(p1, p2):
            return (int((p1[0] + p2[0]) / 2), int((p1[1] + p2[1]) / 2))

        for poz, robot in game.get('robots').items():
            if czy_wrog(poz):
                if rg.wdist(poz, self.location) == 2:
                    if zprzodu(poz, self.location):
                        return ['attack', miedzypole(poz, self.location)]
                    if rg.wdist(rg.toward(loc, rg.CENTER_POINT), self.location) == 1:
                        return ['attack', rg.toward(poz, rg.CENTER_POINT)]
                    else:
                        return ['attack', (self.location[0], poz[1])]

        # print(lista_wrogow_obok)
        if len(lista_wrogow_obok) > 2 and self.hp < 27:
            return['suicide']  # samobojstwo
        elif len(lista_wrogow_obok):
            return['attack', lista_wrogow_obok[0]]
        print(game.robots)

        # if self.location == rg.CENTER_POINT:
        # return ['guard']

        dystansCP = rg.wdist(self.location, rg.CENTER_POINT)

        if dystansCP > 6:
            # if czy_wejscie(self.poz):
            # idź do środka planszy, ruch domyślny
            # rg.toward najkrotsza odleglosc
            return ['move', rg.toward(self.location, rg.CENTER_POINT)]
        return ['guard']
