/*funkcje1
 */


#include <iostream>

using namespace std;

 float suma(float a, float b){
    float suma=a*a+b*b;
    return suma;
}

int main(int argc, char **argv)
{
    float a,b=0;
    cout << "podaj dwie liczby" << endl;
    cin>>a>>b;
    cout<< "oto suma kwadratow tych liczb "<< suma(a,b) <<endl;


	return 0;
}

