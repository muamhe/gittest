#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a, b, x, y;
	cout << "Podaj dwie liczby całkowite: ";
	cin >> a >> b;
	x = a; y = b;
	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}
	
	cout << "NWD(" << x << "," << y << ") = " << a;	
	return 0;
}
