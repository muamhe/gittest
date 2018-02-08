/*
 * drzewo_bin.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>
#include "drzewo.hpp"

using namespace std;


int main(int argc, char **argv)
{
    
	dodajWezel(korzen, 10);
	dodajWezel(korzen, 2);
	dodajWezel(korzen, 43);
    dodajWezel(korzen, 3);
	dodajWezel(korzen, 41);
	dodajWezel(korzen, 45);
	
    
    cout << "Posortowane drzewo niemalejaco: ";
    wyswietlRosnaco(korzen);
    
    delete korzen; //zwolnienie wykorzystywaniej pamieci
    
    
	return 0;
}

