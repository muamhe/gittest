/*
 * cwizenie 1
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Podaj wyraz: ";
    string tekst;
    cin>> tekst;

    int x = tekst.length();



    for(int i = x; i >= 0; i--){

        cout << tekst[i];
    }

	return 0;
}

