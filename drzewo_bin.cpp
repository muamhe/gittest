/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 * 
 */


#include <iostream>

using namespace std;

struct Wezel{
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
} *korzen = NULL;//definicja struktury i utworzenie wskaznika korzen

Wezel* stworzWezel(int wartosc){
    Wezel *nowyWezel = new Wezel;
    nowyWezel->wartosc = wartosc;
    nowyWezel->lewy = NULL; 
    nowyWezel->prawy = NULL;
    
    return nowyWezel; 
    }
    
void dodajWezel(Wezel *wezel, int wartosc){
    if (korzen == NULL) { //drzewo jest puste
        korzen = stworzWezel(wartosc); // utworzenie pierwszego elementu wezla
        } else {
            if(wartosc < wezel->wartosc){//wstawiamy wartosc mniejsza od danego wezla
                if (wezel->lewy !=NULL){
                    dodajWezel(wezel->lewy, wartosc);//rekurencyjne wywolanie dodawania do lewego poddrzewa
                    }else{//lewy potomek nie istnieje
                        wezel->lewy = storzWezel(wartosc); // tworzy nowy wezel
                        }
                }else { // wstawuamy wartosc wieksza
                     if (wezel->prawy !=NULL){
                    dodajWezel(wezel->prawy, wartosc);//rekurencyjne wywolanie dodawania do lewego poddrzewa
                    }else{//lewy potomek nie istnieje
                        wezel->prawy = storzWezel(wartosc); // tworzy nowy wezel
                        }
                    }
            }
    
    }

int main(int argc, char **argv)
{
	
	return 0;
}

