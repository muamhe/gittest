#include <iostream>
using namespace std;

int main(int argc, char **argv)
{int a, b, c =0;
    cout << "Podaj dlugosci bokow trojkata" << endl;
    cin >> a >> b >> c;
        if (a+b > c && a<c && b<c){
        cout << "Z tych dlugosci moze powstac trojkat" << endl;
   } else
        if (a+c > b && a<b && c<b){
        cout << "Z tych dlugosci moze powstac trojkat" << endl;
    }else
         if (c+b > a && c<a && b<a){
        cout << "Z tych dlugosci moze powstac trojkat" << endl;
    }else
    cout << "Z tych dlugosci nie moze powstac trojkat" << endl;

	return 0;
}
