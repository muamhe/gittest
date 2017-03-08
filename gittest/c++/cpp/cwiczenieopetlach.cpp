#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a,b=0;
do{
    cout << "podaj liczbe: ";
    cin>>a;
    b+=a;
    cout << "suma: " << b << endl;
}while (b<=0);


	return 0;
}
