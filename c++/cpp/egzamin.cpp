#include <iostream>
using namespace std;

int main(int argc, char **argv)
{int a=0;
    cout << "Podaj wynik egzaminu" << endl;
    cin >> a;
    if (a>=0 && a<=30)
        cout << "grupa poczatkujaca" << endl;
        else
    if (a>30 && a<60)
        cout << "grupa podstawowa" << endl;
        else
    if (a>=60 && a<=100)
        cout << "grupa zaawansowana" << endl;
        else
    if (a<0)
    cout << "nie masz tu czego szukac";

	return 0;
}
