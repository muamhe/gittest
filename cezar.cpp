/*
 *szyfr cezara
 */


#include <iostream>
using namespace std;

void szyfruj(string tekst, int klucz){
//    klucz=klucz % 26;
   
    for(int i=0;i<=tekst.length();i++){
		if(tekst[i]>=65 && tekst[i]<=90-klucz) tekst[i]=int(tekst[i])+klucz; //wielkie liter
		else if(tekst[i]>=91-klucz && tekst[i]<=90) tekst[i]=int(tekst[i])-26+klucz; // wielkie litery
		else if(tekst[i]>=97 && tekst[i]<=122-klucz) tekst[i]=int(tekst[i])+klucz; //male litery
		else if(tekst[i]>=123-klucz && tekst[i]<=122) tekst[i]=int(tekst[i])-26+klucz; //male litery
}
    
    
    
    
   /* while (tekst[i] != '\0'){
        if((int)tekst[i] + klucz>122)
            tekst[i]=(int)tekst[i]+klucz-26);
        else

        i++;
        }

*/
	cout << tekst<<endl;
    }


int main(int argc, char **argv)
{
    int klucz;
    string tekst;

    cout << "Podaj tekst do zaszyfrowania: " << endl;
    cin>>tekst;
	cout << "Podaj stopien szyfrowania: " << endl;
	cin>>klucz;
	szyfruj(tekst,klucz);

	system ("pause");
}




