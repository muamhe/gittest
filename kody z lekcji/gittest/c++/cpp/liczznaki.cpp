/*
 * licz
 */


#include <iostream>

using namespace std;

void licz_znaki(char tab[]){
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

}


int main(int argc, char **argv)
{
    int rozmiar=100;
    char tab[rozmiar];
        cin.getline(tab, rozmiar);
        //cout <<tab;
        licz_znaki(tab);

	return 0;

}

