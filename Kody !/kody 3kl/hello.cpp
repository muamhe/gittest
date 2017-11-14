/*
 * //test       
 * 
 */


#include <iostream>
using namespace std;

    int parzyste(int a){
    int d=0;    
        for(int i=0;i<=a;i+=2){
            cout<< i<<endl;
            d++;
            }
    cout << "ilosc liczb"<< endl;
    return d;
    }


int main(int argc, char **argv)
{
    string imie;
    int wiek;
    int rok;
    int c;
    int a;
    //int d=0;
    
    cout << "witaj!"<<endl;
    cout << "prosze podac swoje imie" << endl;
    getline(cin,imie);
    cout << "witaj " << imie << "!"<< endl;
    cout << "ile masz lat?" << endl;
    cin >> wiek;
    cout << "urodziles sie w " << 2017-wiek << " roku!" << endl; 
    rok=2017-wiek;
    c=1983;
    if(rok==c){
        cout<<"jestesmy w tym samym wieku haha :D"<<endl;
        
        }else 
        
        if(c<rok){
            cout<< "jestem od ciebie starszy :)" << endl;
            } else
        cout<<"jestem od ciebie mlodszy ^^" << endl;
        
    cout << "prosze podac liczbe"<<endl;
        cin>>a;
    cout << parzyste(a)<< endl;
    
    //cout << d;
    /*for(int i=2;i<=100;i+=2){
        cout<< i<<endl;
        }*/
    
    
	
	return 0;
}

