/*
 *sort wybor
 *
 */


#include <iostream>
using namespace std;

void sort(int n, int tab[]){
    int min=0;
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            if (tab[k]<tab[i]){
            min=k;
                }
        }

    }


}

int main(int argc, char **argv)
{
    int n=10;
    int tab[n]={23,100,34,33,1,66,69,45,9,10};

    cout<< sort(n,tab[n]);



	return 0;
}

