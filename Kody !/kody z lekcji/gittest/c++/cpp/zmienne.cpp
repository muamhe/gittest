/*
 * Zmienne w c++
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a; // deklaracja zmiennej o nazwaie a
    float b;
    char znak = 'd'; // deklaracja i inicjacja
    a = b = 0; // inicjacja zmiennej
    bool wynik = false;

/*
    cout << "podaj wartosc a ";
    cin >> a;
    cout << "podaj wartosc b ";
    cin >> b;

    //b = 0;
    cout << a << " " << b << endl;
  */
    cout << "rozmiar w pamieci zmiennych roznych typow" << endl;
    cout << "int\t\t" << sizeof(a) << endl;
    cout << "float\t\t" << sizeof(b) << endl;
    cout << "char\t\t" << sizeof(znak) << endl;
    cout << "bool\t\t" << sizeof(wynik) << " " << wynik << endl;
	return 0;
}
