/*
 *funkcje
 */


#include <iostream>

using namespace std;

int licznik=0; //zmiennia gloibalnie

void sumuj(float a,float b) {
    float suma=a+b;
    cout << "suma " <<suma<< endl;//zmienna lokalnie
    a=a+100;
    b=0;
    cout << "Licznik(sumuj) " <<licznik++<< endl;
}

void sumujR(float &a,float &b) { //przekazywanie argumentow przez wartosc
    float suma=a+b;
    cout << "suma " <<suma<< endl;//zmienna lokalnie
    a=a+100;
    b=0;
    cout << "Licznik(sumuj) " <<licznik++<< endl;
}

float suma(float &a,float &b) { //przekazywanie argumentow przez wartosc
    float suma=a+b;
    return suma;

}

int main(int argc, char **argv)
{
    float a, b =0; //zmienna lokalnie

    cout<< "podaj dwie liczby"<< endl;
    cin >> a >> b;
    cout << "suma " << suma(a,b)<<endl;

   // sumujR(a,b);
    //cout<< " a= "<<a<<" b= "<<b<<endl;
    //cout << "licznik(sumuj) " <<licznik++<<endl;
	return 0;
}
