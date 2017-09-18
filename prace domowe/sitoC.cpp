/*sito eratostenesa
Kamil Sudo³
*/

#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
	int przedzial, i, j, *tab, pierwiastek;
	cout << "Podaj przedzial: ";
	cin >> przedzial;
	 
	pierwiastek = (int)sqrt((double)przedzial);
	tab = new int[przedzial+1];
	for (i = 0; i <= przedzial; i++)
		tab[i] = i;
	 
	for (i = 2; i <= pierwiastek; i++)
	{
		if (tab[i] != 0)
			for (j = 2*i; j <= przedzial; j+= i)
				tab[j] = 0;
	}
	 
	cout << "Liczby pierwsze z przedzialu <2," << przedzial << "> to:\n";
	for (i = 2; i <= przedzial; i++)
		if (tab[i] != 0)
			cout << tab[i] << " ";
	
	 
	system("pause");
}
