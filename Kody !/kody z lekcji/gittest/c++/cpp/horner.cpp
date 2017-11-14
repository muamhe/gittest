/*
 * hornen-it
 *
 */


#include <iostream>

using namespace std;

float horner_it(int stopien, int tabwsp[], float x){
    float wynik=tabwsp[0];

    for(int i=1; i <=stopien; i++){
        wynik=wynik*x +tabwsp[i];
        }
    return wynik;
}

int main(int argc, char **argv)

{
    int stopien=3;
    int tabwsp[stopien+1];
    float x=0;
    for(int i=0; i <= stopien; i++){
        cout<<"podaj liczbe "<<i+1<<": ";
        cin>>tabwsp[i];
        }

    cout << "podaj x " << endl;
    cin >> x;
    cout<<"wielomian " << endl;
    cout << horner_it(stopien, tabwsp, x) << endl;


	return 0;
}

