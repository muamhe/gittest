/*
 *prosty kalkulator
 */


#include <iostream>

using namespace std;

void kalkulator(double a, double b, char znak){
    switch(znak){
        case '+':
        cout << "suma " << a + b << endl;
            break;
        case '-':
            cout << "roznica "<<a- b<< endl;
            break;
        case '*':
            cout<< "iloczyn " << a*b<<endl;
            break;
        case '/':
            if(b==0)
                cout<< "nie dziel przez zero!"<< endl;
            else
                cout << "iloraz " << a/b << endl;
            break;
        }

}



int main(int argc, char **argv)
{
    int n=0;
    double a,b=0;
    char znak;

    cout << "podaj liczbe dzialan ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "podaj pierwsza liczbe ";
        cin >> a;
        cout << "podaj znak ";
        cin >> znak;
        cout << "podaj druga liczbe: ";
        cin >> b;
        kalkulator(a,b, znak);
    }
	return 0;
}

