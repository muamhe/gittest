/*
warunki
 */


#include <iostream>


using namespace std;

int main(int argc, char **argv)
{ float a, b=0;
    cout << "Podaj dwie liczby: ";
    cin >>a >> b;

    if(a > b){
    cout << "A jest wieksze" << endl;
    cout << "a > b";
} else  if(b>a){
    cout << "B ma wieksze jaja" << endl;
    cout << "a < b";
} else {
    cout << "NIC DODAC NIC UJAC " << endl;
    cout << "a = b";
}



	return 0;
}
