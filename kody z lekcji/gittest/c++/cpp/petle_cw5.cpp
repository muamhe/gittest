/*
*
* zadanie 5
*
*/

#include <iostream>

using namespace std;

int main()
{
    float liczbaocen = 0, ocena = 0, suma = 0;

    cout << "Podaj ilosc ocen: ";
    cin >> liczbaocen;

    for(int i = 1; i <= liczbaocen; i++){
        cout << "Podaj ocene: ";
        cin >> ocena;
        suma += ocena;
    }

    cout << "Srednia ocen: " << suma/liczbaocen;

    return 0;
}
