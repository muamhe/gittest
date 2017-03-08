/*
 * fibonacii cpp
 *
 */


#include <iostream>
using namespace std;

//fibrek(n)=1 dla n=0,1
//dibrek (n) = fibrek(n-1) + fibrek(n-2)  dla n>1

long int fib_rek(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib_rek(n-1)+fib_rek(n-2);
}

long int fibonacci(int n){
    int a=0;
    int b=1;
    int wynik=0;
    if(n==1) wynik=1;
    for(int i =0;i<n-1;i++){
        wynik=a+b;
        a=b;
        b=wynik;
        }
    return wynik;
    }

int main(int argc, char **argv)
{   int n=0;
    cout << "podaj liczbe: ";
    cin >> n;
    cout<< "fibonacci iteracyjna: " << fibonacci(n)<<endl;
    cout<< "fibonacci rekurencyjna: " << fib_rek(n);
	return 0;
}

