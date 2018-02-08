/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>
#include "drzewo.hpp"

using namespace std;


Drzewo* stworzWezel(int wartosc) {
    Drzewo *nowyWezel = new Drzewo;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void dodajWezel(Drzewo *wezel, int wartosc) {
    if (korzen == NULL) { // drzewo jest puste!
        korzen = stworzWezel(wartosc); // utworzenie 1. elementu
    } else {
        if (wartosc < wezel->wartosc) { // wstawiamy wartość mniejszą
            if(wezel->lewy != NULL) {
                dodajWezel(wezel->lewy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // lewy potomek nie istnieje
                wezel->lewy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        } else { // wstawiamy wartość większą
            if(wezel->prawy != NULL) {
                dodajWezel(wezel->prawy, wartosc);  // rekurencyjne wywołanie dodawanie do lewego poddrzewa
            } else {  // prawy potomek nie istnieje
                wezel->prawy = stworzWezel(wartosc);  // tworzymy nowy wezel
            }
        }
    }
}

//funkcja rekurencyjnie przegladajaca drzewo
void wyswietlRosnaco(Drzewo *wezel){
    if (wezel != NULL){ //jezeli wezel nie jest pusty
        //rekurencyhnie wtswuetk lewe poddrzeweo
        wyswietlRosnaco(wezel->lewy);
        //wypisz wartosc aktualnego wezla
        cout << wezel->wartosc << ", ";
        //rekurencyjnie wyswietl prawe poddrzewo
        wyswietlRosnaco(wezel->prawy);
        //cout << wezel->wartosc << ", ";
        }
    
    }


