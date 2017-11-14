#include <iostream>
#include <math.h>

using namespace std;

int suma(int n, int m) {
	//cout << "Suma: " << n+m << endl;
	return n+m;
}

void roznica(int n, int m) {
	cout << "Różnica: " << n-m << endl;
}

void szlaczek(char znak, int ile) {
	for (int i=0; i<ile; i++)
		cout << znak;
    cout << endl;
}

int main(int argc, char **argv) {
	int a, b;
	a = b = 0;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;
	int s = suma(a, b);
	cout << "Suma: " << s << endl;

    szlaczek('*', 20);
	roznica(s,b);
    szlaczek('#', 20);
	return 0;
}
