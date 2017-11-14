/*
 *funkcje4
 */


#include <iostream>

using namespace std;

int zliczaj(int licznik){
    return ++licznik;
}



int main(int argc, char **argv)
{
      int liczba, ujemne, dodatnie=0;

      do{
          cout<<"podaj liczbe " <<endl;
          cin>>liczba;
          if(liczba>=0)
          dodatnie=zliczaj(dodatnie);
          else
          ujemne=zliczaj(ujemne);
    }while (liczba !=0);
    cout<< "dodatich " << dodatnie << "ujemnych" << ujemne;


	return 0;
}

