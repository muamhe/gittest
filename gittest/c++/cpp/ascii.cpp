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

int drukuj3(char tab[]){
        int i=0;
        while (tab[i] != '\0'){
            cout<< tab[i]<<" "<< (int)tab[i]<< endl;
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

void ascii(){
    for(int i=0; i <128;i++)
    cout << (char)i<<" ";
}



void zamien(char tab[]){
    int i=0;
        while (tab[i] != '\0'){
           if((int)tab[i]>64 && (int)tab[i]<91) //duza litera
           tab[i]=char((int)tab[i]+32);
        else if ((int)tab[i]>89 && (int)tab[i]<123) //mala litera
            tab[i]=char((int)tab[i]-32);
        i++;
    }
}

int main(int argc, char **argv)
{
    int rozmiar=100;
    char tab[rozmiar];


    //wypelnij(tab,rozmiar);
    cin.getline(tab, rozmiar);
    //cout<<"Dlugosc tekstu "<<drukuj2(tab);
    //drukuj(tab,rozmiar,false);
    //cout<<tab[rozmiar];
    //ascii();
        //cout<<"Dlugosc tekstu "<<drukuj3(tab)<<endl;
    zamien(tab);
        cout<<"Dlugosc tekstu "<<drukuj3(tab)<<endl;



	return 0;

}

