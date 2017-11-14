#include <iostream>
#include <cmath>
using namespace std;

float st, rad;

int main()
{
	st = 0.0;
	do
	{
		rad = st*M_PI/180;
		cout << "cos(" << st << ") = " << cos(rad) << endl;
		st+=10.0;
	}
	while(cos(rad)!=0.0);
    return 0;
}

