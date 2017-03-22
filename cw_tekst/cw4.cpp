/*
 * cwiczenie 4
 *
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    string tekst;
    int dlugosc,wyr;

    cout<< "podaj tekst: ";
    getline(cin, tekst);

    dlugosc = tekst.length();

    for(int i = 0; i < dlugosc; i++){
        if(tekst[i] == ' ')
            wyr++;

        }
    for(int i = dlugosc; i >= 0 ;i--){
        cout << tekst[i];
        }

	return 0;
}

