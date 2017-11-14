#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

void drukujwstecz(char tab[], int rozmiar) {
	for (int i=rozmiar-1; i>-1; i--)
		cout << tab[i];
	cout << endl;
}

int main(int argc, char *argv[]) {
	int roz = 11;//rozmiar tab o 1 większy
	char tab[roz];
	cout << "Jak się nazywasz? ";
	cin.getline(tab,roz);
	int ileznakow=0;
	ileznakow = strlen(tab);
	cout << "Wprowadzono " << ileznakow << " znaków." << endl;
	drukujwstecz(tab,ileznakow);
	return 0;
}
