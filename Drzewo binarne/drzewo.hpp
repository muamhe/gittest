#include <iostream>
#ifndef DRZEWO_HPP
#define DRZEWO_HPP

using namespace std;



struct Wezel {
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
    
};

class Drzewo{
    
    private:
    
    *korzen;
    
    public:
    
  
    

    Wezel* stworzWezel(int );
    void dodajWezel(Wezel* , int );
    void wyswietlRosnaco(Wezel* );
   
};
#endif
