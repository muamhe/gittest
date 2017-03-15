/*
 * warunki zagniezdzone
 *bajery jak nie wiem co
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{ float a, b, c = 0;
    cout << "Prosze podac 3 kolejne liczby" << endl;
    cin >> a >> b >> c;
/*
    if(a<b){
       if (a<c)
        cout << "A jest najmniejsze!" << a;
        else
        cout << "c jest najmniejsze!" << c;
    }else
     if (b<a){
        if (b<c)
            cout << "B jest najmniejsze!" << b;
            else
            cout << "c jest najmniejsze!" << c;
        }else
     if (c<a){
        if (c<b)
        cout << "C jest najmniejsze!" << c;
        else
        cout << "B jest najmniejsze!" << b;
    }*/
    if (a<b && a<c)
        cout << "A jest najmniejsze!" << a;
    else if (b<a)
        cout << "B jest najmniejsze!" << b;
    else
        cout << "c jest najmniejsze!" << c;

	return 0;
}
