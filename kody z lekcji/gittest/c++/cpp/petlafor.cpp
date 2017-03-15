#include <iostream>

using namespace std;

int main(int argc, char **argv)
{int i,a=0; //zmienna interacyjna
    //(start,warunek,zmiana)
/*  cout <<"podaj liczbe a"<<endl;
    cin >> a;
    for (i = 0;i<a; i=i+1)
        cout << i << " ";

  cout <<"podaj liczbe a"<<endl;
    cin >> a;
    for (i = 0;i<a; i=i+2)
        cout << i << " ";
*/
          cout <<"podaj liczbe a"<<endl;
    cin >> a;
    for (i = 0;i>a; i=(2*i)+3)
        cout << i << " ";
	return 0;
}
