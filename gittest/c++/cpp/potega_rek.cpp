/*
 *potega rekurencyjna
 *
 */


#include <iostream>
using namespace std;

long int pot_rek(int a, int b){
    if(b==0)
    return 1;
    return pot_rek(a,b-1)*a;
    }

int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Do jakiej potegi chcesz ja podniesc?: ";
    cin >> b;
    cout << "Potega: " << pot_rek(a,b);

	return 0;
}

