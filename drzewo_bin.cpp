/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>

using namespace std;

struct Wezel {
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
} *korzen = NULL; // definicja struktury i utworzenie wskaźnika korzen

Wezel* stworzWezel(int wartosc) {
    Wezel *nowyWezel = new Wezel;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL;
    nowyWezel->prawy = NULL;
    
    return nowyWezel;
}

void dodajWezel(Wezel *wezel, int wartosc) {
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
void wyswietlRosnaco(Wezel *wezel){
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

int main(int argc, char **argv)
{
	dodajWezel(korzen, 10);
	dodajWezel(korzen, 8);
	dodajWezel(korzen, 4);
	dodajWezel(korzen, 15);
	dodajWezel(korzen, 20);
	dodajWezel(korzen, 17);
	dodajWezel(korzen, 6);
    
    cout << "Posortowane drzewo niemalejaco: ";
    wyswietlRosnaco(korzen);
    
    delete korzen; //zwolnienie wykorzystywaniej pamieci
    
    
	return 0;
}

