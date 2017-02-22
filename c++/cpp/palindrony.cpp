/*
 * licz
 */


#include <iostream>

using namespace std;

int licz_znaki(char tab[]){
    int sz1, sz2, sz3, sz4;
    sz1 = sz2 = sz3 = sz4 =0;
    int i=0;//indeks tabeli
    while(tab[i] !='\0'){
        switch(tab[i]){
            case ',':
                sz1++;
            break;
            case '.':
                sz2++;
            break;
            case ' ':
                sz3++;
            break;
            default:
                sz4++;

        }

      i++;//powieksz i o jeden
    }
    cout << "przecinki " << sz1<<endl;
    cout << "kropki " << sz2<<endl;
    cout << "spacje " << sz3<<endl;
    cout << "pozostale znaki " << sz4<<endl;
    cout << "wszystkie znaki " << sz1 + sz2 +sz3 +sz4 <<endl;
    return sz1 + sz2 +sz3 +sz4;
}



bool czy_palindrom(char tab[]){
    int rozmiar=licz_znaki(tab);
    cout << rozmiar;
    bool czypalindrom = true;
        for(int i=0;i<rozmiar/2; i++){
     cout << tab[i]<< " " << tab[rozmiar-1-i];
    //jezeli znajdziesz pare znakow rozniacych sie od siebie
    //zmienna nalezy ustawic na false
    if(tab[i] != tab[rozmiar-1-i])
        czypalindron=false;
    }
return czypalindrom;
}

int main(int argc, char **argv)
{
    int rozmiar=100;
    char tab[rozmiar];
        cin.getline(tab, rozmiar);
        cout <<tab;
       if (czy_palindrom(tab))
            cout << "to palindrom";
        else
            cout << "to nie jest palindrom";

	return 0;

}

