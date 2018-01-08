/*
 *struktury
 */


#include <iostream>
#include <iomanip>
#include <fstream>

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
    
void zapiszDane(osoba t[], int ile){
    ofstream plik("osoby.txt", ios::app);
    if (!plik.is_open()){
        cout << "Błąd otwarcia pliku!";
        }else{ for(int i=0; i < ile; i++){
            cout << t[i].imie << ", " << t[i].nazwisko << ", " << t[i].wiek << endl;
            plik << t[i].imie << ", " << t[i].nazwisko << ", " << t[i].wiek << endl;
            } 
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
    
int czytajDane(osoba t[]){
    ifstream plik("osoby.txt");
    string linia;
    int i = 0;
    
    if (plik.is_open()){
        while(getline(plik, linia)){
           cout << linia << endl;
           i++; //liczymy odczytane rekordy
           } 
        }else {
            cout << "Błąd otwarcia pliku!";
            }
            
    return i;
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
    //getOsoby(tb, ile);
    //drukujOsoby(tb, ile);
    //zapiszDane(tb, ile);
    cout << czytajDane(tb) << endl;
    
	
	return 0;
}

