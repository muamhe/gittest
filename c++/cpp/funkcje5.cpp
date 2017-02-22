/*
 *
 * funkcje 5
 *
 */


#include <iostream>
using namespace std;

void trojkat(int a){
    for(int i=a; i>=1;i--){
        cout <<"$";
        if(i==1){
            a-=1;
            i=a+1;
            cout << endl;
        }
    }
}

int main(int argc, char **argv)
{
    int przyprostokatna = 10;
    trojkat(przyprostokatna);


	return 0;
}

