/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>
#include "ul_ulamek.h"

using namespace std;

Ulamek::Ulamek(int l, int m){
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem!";
        exit(1);
        }
    }

void Ulamek::zapisz(int l, int m){
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem!";
        exit(1);
        }
    }
 
void Ulamek::wypisz(){
        cout << licznik << "/" << mianownik << endl;
        }
        
void Ulamek::skracaj(){
    ; //wykorzystaj algorytm euklidesa optymalny
    }
    

int Ulamek::get_l(){
        return licznik;
        }

        
int Ulamek::get_m(){
        return mianownik;
        }
        


