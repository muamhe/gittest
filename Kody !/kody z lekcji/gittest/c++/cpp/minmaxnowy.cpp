/*

 *
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

    for(int i=0;i<roz;i++){
        if(tab[i]>


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
    cout << "minimum"<< min(tab,roz)<<endl;
    cout << "maximum"<< max(tab,roz)<<endl;


	return 0;
}

