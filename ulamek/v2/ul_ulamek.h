#ifndef ULAMEK_H
#define ULAMEK_H

/*
 * plik naglowkowy klasy ulamek
 * 
 * Copyright 2018  <>
 * 
 */
 
class Ulamek {
private:
    int licznik;  //deklaracja skladowej wlasciwosci
    int mianownik; // sa to deklaracje prywatne
public:
    Ulamek(int, int); // deklaracja konstruktora
    void zapisz(int, int); //deklaracja metody
    void wypisz();
    int get_l();
    int get_m();
    void skracaj(); // metoda drukuje skrocona postac ulamka(algorytm euklidesa)
};
#endif
