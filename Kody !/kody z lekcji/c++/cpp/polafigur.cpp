/*
pole i obowd trojkata i prostokata
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{ float a, b, c, d, e, h =0; // deklaracja+inicjajcja
    cout << "Prosze wpisac dane prostokata" << endl;
    cout << "Podaj wartosc boku a: ";
    cin >> a;
    cout << "Podaj wartosc boku b: ";
    cin >> b;
    cout << "Pole prostokata" << endl;
    cout << a*b << endl;
    cout << "Obwod prostokata" << endl;
    cout << 2*a +2*b << endl;
    cout << "Prosze podac dane trojkata " << endl;
    cout << "Podaj wartosc c: " << endl;
    cin >> c;
    cout << "Podaj wartosc d: " << endl;
    cin >> d;
    cout << "Podaj wartosc e: " << endl;
    cin >> e;
    cout << "Podaj wartosc h: " << endl;
    cin >> h;
    cout << "Pole trojkata: " << endl;
    cout << (c*h)/2 << endl;
    cout << "Obwod trojkata: " << endl;
    cout << c+d+e << endl;
    cout << "Dziekujemy za skorzystanie z naszych uslug XDDDDD" << endl;
	return 0;
}
