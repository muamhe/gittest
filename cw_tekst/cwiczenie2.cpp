/*
 *cwiczenie 2
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    string tekst;

    cout << "Podaj wyraz (4-ro znakowy): ";
    cin>> tekst;

    for(int i = 4; i >= 0; i--){

        cout << tekst[i];
    }

	return 0;
}

