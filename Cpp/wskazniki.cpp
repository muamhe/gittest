/*
 * wskazniki.cpp
 * 
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int x = 11;
    cout << x << endl; // wartosc zmiennej
    cout << &x << endl; // adres zmiennej w pamieci(0x wartosci szestnastkowe)
    cout << * &x << endl; // wartosc zmiennej pod adresem
    
    int *px; //definicja wskaznika do typu calkowitego
    px = &x; //inicjacja wskaznika
    // wskaznik zawsze zawiera adres pamieci
    cout << px << endl;
    cout << *px << endl;
    
    int y = 100;
    px = &y;
    cout << px << endl;
    cout << *px << endl;

	return 0;
}

