/*
 * tablice
 */


#include <iostream>

using namespace std;
void wypelnij(char tab[],char rozmiar){
    cout << "podaj tekst "<< endl;
    for(int i=0;i<rozmiar;i++){
        cin>>tab[i];
    }
}


void drukuj(char tab[],char rozmiar, bool wstecz){
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

int drukuj2(char tab[]){
        int i=0;
        while (tab[i] != '\0'){
            cout<< tab[i]<<" ";
            i++;
        }
        return i;
}
/*
void drukuj2(char tab[]){
        int i=0;
        while (tab[i] != '\0'){
            cout<< tab[i]<<" "<<endl;
            i++;
        }
}
*/

int main(int argc, char **argv)
{
    int rozmiar=10;
    char tab[rozmiar];


    //wypelnij(tab,rozmiar);
    cin.getline(tab, rozmiar);
    cout<<"Dlugosc tekstu "<<drukuj2(tab);
    //drukuj(tab,rozmiar,false);
    //cout<<tab[rozmiar];





	return 0;

}

