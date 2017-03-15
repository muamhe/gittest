/*
 *
 * funkcje 3
 *
 */


#include <iostream>

using namespace std;

float pole(float a, float b){
    float pole=a*a*b;
    return pole;
}

float kwadrat(float a){
    float kwadrat = a*a;
    return kwadrat;
}

int main(int argc, char **argv)
{
    float a,b=0;
    cout << "podaj a i b"<< endl;
    cin >> a>>b;
    cout << "pole powierzchni wynosi " << pole(a,b)<< endl;
    cout << "kwadrat podstawy wynosi " << kwadrat(a)<< endl;

	return 0;
}

