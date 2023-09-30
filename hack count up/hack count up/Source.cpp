#include <iostream>

using namespace std;

int main()
{
	double getal,antw=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> getal;
		antw += getal;
	}
	cout << antw;
	
	return 0;
}