/*
 *
 *zadanie 6
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int a, suma = 0;

    do{
        cout << "podaj liczbe: ";
        cin >> a;
        if(a % 2 > 0) suma++;
    }while(a > 0);

    cout << "ilosc liczb nieparzystych: " << suma << endl;

    return 0;
}
