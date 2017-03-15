#include <iostream>

using namespace std;

float srednia(int x[], int iRozm){
    float suma = 0;
    for(int i = 0; i < iRozm; i++)
        suma += x[i];
    return suma/8;
}

int roznica(int x[], int rozmiar){
    int wynik = 0;
    for(int i = 0; i < rozmiar; i++)
        wynik -= x[i];
    return wynik;
}

int suma(int a[], int iRozmiar){
    int suma = 0;
    for(int i = 0; i < iRozmiar; i++)
        suma += a[i];
    return suma;
}


int main(int argc, char **argv)
{
    int a[8];

    for(int i = 0; i < 8; i++){
        cout << "Podaj liczbe (" << i+1 << "): ";
        cin >> a[i];
    }

    cout << "Suma: " << suma(a, 8) << endl;
    cout << "Roznica: " << roznica(a, 8) << endl;
    cout << "Srednia: " << srednia(a, 8) << endl;

    return 0;
}
#include <iostream>

int main(int argc, char **argv)
{

	return 0;
}

