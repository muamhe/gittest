#include <iostream>

using namespace std;

int i;

double SilniaRek(double n)
{
	double marnotrawstwo[3650];

	return n==0.0 ? 1 : n*SilniaRek(n-1);
}

int main()
{
	for(i=1; i<=200; i++)
		cout << i << "!=" << SilniaRek(i) << endl;
    return 0;
}
