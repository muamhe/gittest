/*
 *struktury
 */


#include <iostream>
#include <iomanip>

using namespace std;

struct osoba {
    char imie[20];
    char nazwisko[20];
    int wiek;
    
    };
    
void wyswietlDane(osoba o){
    cout << setw(20) << "Imie: " << o.imie << endl;
    cout << setw(20) << "Nazwisko: " << o.nazwisko << endl;
    cout << setw(20) << "Wiek: " << o.wiek << endl;
    
    }
    
struct samochod{
    char marka[50];
    char typ[50];
    int przebieg;
    
    };
    
void wyswietlDaneS(samochod a){
    cout << setw(20) << "Marka: " << a.marka << endl;
    cout << setw(20) << "Typ: " << a.typ << endl;
    cout << setw(20) << "Przebieg: " << a.przebieg << endl;
    
    }
    
void getOsoby(osoba t[], int ile){
    for(int i=0; i < ile; i++){
        cout << "Podaj imie: ";
        cin >> t[i].imie;
        cout << "Podaj nazwisko: ";
        cin >> t[i].nazwisko;
        cout << "Podaj wiek: ";
        cin >> t[i].wiek;
    }
    }
    
void drukujOsoby(osoba t[], int ile){
    for(int i=0; i < ile; i++){
        cout << "Imie : ";
        cout << t[i].imie << ", ";
        cout << "Nazwisko: ";
        cout << t[i].nazwisko << ", ";
        cout << "Wiek: ";
        cout << t[i].wiek << ", ";
        cout << endl;
    }
    }

int main(int argc, char **argv)
{
    //~osoba uczen1;
    //~cout << "Podaj imie: ";
    //~cin >> uczen1.imie;
    //~cout << "Podaj nazwisko: ";
    //~cin >> uczen1.nazwisko;
    //~cout << "Podaj wiek: ";
    //~cin >> uczen1.wiek;
    
    //~wyswietlDane(uczen1);
    
    //~samochod auto1;
    //~cout << "Podaj marke: ";
    //~cin >> auto1.marka;
    //~cout << "Podaj typ: ";
    //~cin >> auto1.typ;
    //~cout << "Podaj przebieg: ";
    //~cin >> auto1.przebieg;
    
    //~wyswietlDaneS(auto1);
    
    int ile;
    cout << "Ile osob? ";
    cin >> ile;
    
    osoba tb[ile];
    getOsoby(tb, ile);
    drukujOsoby(tb, ile);
    
	
	return 0;
}

