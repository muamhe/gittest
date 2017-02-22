/*
 *funkcja 2
 *
 */


#include <iostream>
using namespace std;

  float suma(float a, float b){
    float suma=a*a+b*b;
    return suma;
}



int main(int argc, char **argv)
{
    float a,b,c=0;
    cout << "podaj miare 2 przyprostokatnych" << endl;
    cin >> a>>b;
    cout << "podaj miare przeciwprostokatnej" << endl;
    cin>> c;
    if(suma(a,b)==c*c){
        cout << "da sie"<< endl;
    }else cout << "nie da sie";


	return 0;
}

