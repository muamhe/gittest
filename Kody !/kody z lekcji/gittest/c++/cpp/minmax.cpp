/*
 * minmax.cpp
 *
 */


#include <iostream>

using namespace std;

void pobierzdane(int tab[], int rozmiar){

    for(int i =0; i<rozmiar;i++){
        cout<<"podaj liczbe "<<i+1<<": ";
        cin>>tab[i];
    }
}

int min(int tab[], int rozmiar){
    int minimum=tab[0];
    for(int i=1;i<rozmiar;i++){
    if(tab[i]<minimum){
        minimum=tab[i];

}
 }
    return minimum;
}

int max(int tab[], int rozmiar){
   int maximum=tab[0];
    for(int i=1;i<rozmiar;i++){
    if(tab[i]>maximum){
        maximum=tab[i];

}
 }
return maximum;
}

int rozdziel(int tab[], int tabmin[], int tabmax[], int rozmiar){




}

int main(int argc, char **argv)
{
    int rozmiar=0;
    cout<<"ile podasz liczb?";
    cin >> rozmiar;
    int tab[rozmiar];
    pobierzdane(tab, rozmiar);
    cout << "minimum"<< min(tab,rozmiar)<<endl;
    cout << "maximum"<< max(tab,rozmiar)<<endl;
	return 0;
}

