/*
 * tablice
 */


#include <iostream>

using namespace std;
void wypelnij(int tab[],int rozmiar){
    cout << "podaj liczbe "<< endl;
    for(int i=0;i<rozmiar;i++){
        cin>>tab[i];
    }
}


void drukuj(int tab[],int rozmiar, bool wstecz){
    cout << "zawartosc tabeli "<< endl;
    if(wstecz){
        for(int i=rozmiar-1;i>=0;i--){
        cout<<tab[i]<<" ";
    }
    }else
    for(int i=0;i<rozmiar;i++){
        cout<<tab[i]<<" ";
}
}


void suma(int tab[],int rozmiar){
    int sumac=0;
    for(int i=0;i<rozmiar;i++){
        sumac +=i;
    }
    cout<< "suma " << sumac<< endl;
}


void min(int tab[],int rozmiar){
    int najmniejsza=tab[0]; //inicjacja pierwszym elementem tablicy
    for(int i=1;i<rozmiar;i++){
        if(tab[i]<najmniejsza){
            najmniejsza = tab[i];
        }
    }
 cout<< "min" << najmniejsza<< endl;
}

void max(int tab[],int rozmiar){
    int najwieksza=tab[0]; //inicjacja pierwszym elementem tablicy
    for(int i=1;i<rozmiar;i++){
        if(tab[i]>najwieksza){
            najwieksza = tab[i];
        }
    }
 cout<< "max" << najwieksza<< endl;
}

int main(int argc, char **argv)
{
    int rozmiar=10;
    int tab[rozmiar];


    wypelnij(tab,rozmiar);

    drukuj(tab,rozmiar,true);

    suma(tab, rozmiar);
    min(tab, rozmiar);

    max(tab,rozmiar);


    /*for(int i=0;i<10;i++){
        cin>>tab[i];
    }
    for(int i=rozmiar-1;i>=0;i--){
        cout<<tab[i]<<" ";
    } */


   //cout << tab[0]<< endl;
   //cout << tab[9]<< endl;


	return 0;

}

