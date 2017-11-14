/*
 * silnia
 *
 *
 *
 */


#include <iostream>
using namespace std;

//n!=1 dla n=0
//n!= (n-1)!*n

//silnia(0) = 1 dla n=0
//silnia(n)= silnia(n-1)!*n dla n>0

long int sil_rek(int n){
    if(n==0)
        return 1;
    else
        return sil_rek(n-1)*n;


    }


long int silnia(int liczba){
   long int wynik=1;
    for(int i=1;i<=liczba;i++){
    wynik=wynik*i;

}

    return wynik;
}

int main(int argc, char **argv)
{
    int liczba=0;

    cout<<"podaj liczbe";
    cin>>liczba;
    cout <<"silnia "<< silnia(liczba)<<endl;
    cout <<"silnia_rek "<< sil_rek(liczba)<<endl;
	return 0;
}

