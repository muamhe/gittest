/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 * 
 */
 
#include <iostream>

using namespace std;
 

 
class Ulamek {
    int licznik;  //deklaracja skladowej wlasciwosci
    int mianownik; // sa to deklaracje prywatne
public:
    Ulamek(int, int); // deklaracja konstruktora
    void zapisz(int, int); //deklaracja metody
    void wypisz(){
        cout << licznik << "/" << mianownik << endl;
        }
    int get_l(){
        return licznik;
        }
    int get_m(){
        return mianownik;
        }
    void skracaj(); // metoda drukuje skrocona postac ulamka(algorytm euklidesa)
};



void Ulamek::zapisz(int l, int m){
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem!";
        exit(1);
        }
    }
    
    
Ulamek::Ulamek(int l, int m){
    licznik = l;
    if (m != 0) mianownik = m;
    else{
        cout << "Mianownik nie moze byc zerem!";
        exit(1);
        }
    }
    
void Ulamek::skracaj(){
    ; //wykorzystaj algorytm euklidesa optymalny
    }

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

