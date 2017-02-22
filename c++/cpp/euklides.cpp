/*
 * euklides.cpp
 *
 *
 * 796,343
 */


#include <iostream>

using namespace std;

int nwd1(int a, int b){
    int p=0;
    while(a!=b){
       if(a>b)
           a=a-b;
       else
           b=b-a;
           p++;
       }
    cout<<"liczba powtorzen " <<p<<endl;
    return a;

}

int nwd2(int a, int b){
    int p=0;
    while(a>0){
        a=a%b;
        b=b-a;
        p++;
}
    cout<<"liczba powtorzen " <<p<<endl;
    return b;
}

int euklides_rek(int a, int b){
    if(a==b)
    return a;

    if(a>b)
    return euklides_rek(a-b,b);

    return euklides_rek(b-a,a);


    }




int main(int argc, char **argv)
{
    int a,b=0;

    cout<< "podaj a ";
    cin>>a;
    cout<<"podaj b ";
    cin>>b;
    cout<<"klasyczne nwd1 " << nwd1(a,b)<<endl;
    cout<<"optymalne nwd2 " << nwd2(a,b)<<endl;
    cout<<"euklides klasyczny " << euklides_rek(a,b)<<endl;

	return 0;
}

