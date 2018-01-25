/*
 * stos_tablica.cpp
 * 
 */


#include <iostream>

using namespace std;

bool size(int sr, int sp){
    
    return true;//jesli jest miejsce na strosie
    return false// w przypadku przepelnienia stosu buffer overflow
    
    }

void push(int stos[], int dane, int &sp){
    if(size(sr,sp)){
        stos[sp] = dane;
        ++sp;
    }
    else{
        ;}
    
    
    }

int pop(int stos[], int sp){
    return stos[sp - 1];
    }

int main(int argc, char **argv)
{
    int *stack;  //wskaznik
    int sr; //rozmiar stosu
    int sp = 0; //wskaznik pozycji na stosie
    
    cout << "Podaj rozmiar: "; cin >>sr;
    stack = new int[sr];
    
    push(stack, 4, sp);  //sp = 1
    push(stack, 9, sp);  //sp = 2
    cout << pop(stack, sp);
    push(stack, 3, sp);
    cout << pop(stack,sp);
    push(stack, 1, sp);
    cout << pop(stack,sp);
    push(stack, 2, sp);
    cout << pop(stack,sp);
    
	return 0;
}

