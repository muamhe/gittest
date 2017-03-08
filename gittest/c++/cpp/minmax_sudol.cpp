/*
 *	program wyswietlajacy min i max z zastosowaniem metody "dziel i zwyciezaj"
 */


#include <iostream>
using namespace std;

void pobierz(int tab[], int roz){

    for(int i =0; i<roz;i++){
        cout<<"podaj liczbe "<<i+1<<": ";
        cin>>tab[i];
    }
}



int min(int tab[], int roz){
    int minimum=tab[0];
    for(int i=1;i<roz;i++){
    if(tab[i]<minimum){
        minimum=tab[i];

}
 }
    return minimum;
}

int max(int tab[], int roz){
   int maximum=tab[0];
    for(int i=1;i<roz;i++){
    if(tab[i]>maximum){
        maximum=tab[i];

}
 }
return maximum;
}



void rozdziel(int tab[], int tabmin[], int tabmax[], int roz){
	int j=0;
		for(int i=0; i < roz; i=i+2){
			if(tab[i] <= tab[i+1]){
				tabmin[j] = tab[i];
				tabmax[j] = tab[i+1];
				j++;
			}else {
				tabmin[j] = tab[i+1];
				tabmax[j] = tab[i];
				j++;
			}
		}
			
			
			
	}
   
int main(int argc, char **argv)
{
    int roz=0;
    cout<<"ile podasz liczb?"<<endl;
    cin>>roz;
    int tab[roz];
    int tabmin[roz/2];
    int tabmax[roz/2];
    pobierz(tab,roz);
    rozdziel(tab, tabmin, tabmax, roz);
    cout << "najmniejsza liczba: " << min(tabmin, roz/2) << endl;
    cout << "najwieksza liczba: " << max(tabmax, roz/2) << endl;


	system ("pause");
}

