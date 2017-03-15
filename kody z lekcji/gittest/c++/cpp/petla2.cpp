#include <iostream>
using namespace std;
int main(int argc, char **argv)

{float a,b=0;
	cout << "podaj liczbe a " << endl;
    cin >> a ;

    do{
    cout << "podaj liczbe b " << endl;
    cin >> b ;
    if(b==0)
        cout << "bledne dane"<< endl;
    }while (b==0);
/*while(b==0){
    cout << "bledne dane"<< endl;
     cout << "podaj liczbe b " << endl;
    cin >> b ;

}*/
    cout << "iloraz"<< a / b;
	return 0;
}
