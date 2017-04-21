#include <iostream>
using namespace std;
int i, n, silnia;
int main()
{
	cout << "Podaj n: ";
	cin >> n;
	silnia = 1;
	i = 1;
	do
	{	
		silnia*=i;
		i++;
	} while(i < n);
	cout << n << "! =" << silnia;
}

