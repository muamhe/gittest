/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 * 
 */
 
#include <iostream>
#include "ul_ulamek.h"

using namespace std;
 

 

int main(int argc, char **argv)
{
    //Ulamek u1, u2; // deklaracja obiektu, czyli instancja klasy
    Ulamek u1(3, 7); // definicja obiektu
    Ulamek u2(1, 4); // definicja obiektu
    //u1.zapisz(3, 7);
    //u2.zapisz(1, 4);
    cout << "Ulamek1: " << endl;
    u1.wypisz();
    cout << "Ulamek2: " << endl;
    u2.wypisz();
    
    u1.zapisz(7, 9);
    cout << "Licznik: "<< u1.get_l() << endl;
    cout << "Mianownik: "<< u1.get_m() << endl;
    
    Ulamek u3(u1.get_l(), u1.get_m());
    u3.wypisz();
    
    /* w domu napisz klase skracajaca ulamki*/
	
	return 0;
}

