#include <iostream>

using namespace std;

int berekening(int getal1, int getal2);

int main()
{
	int getal1, getal2, getal=1;
	cout << " geef getal 1 in :";
	cin >> getal1;
	cout << " geef getal 2 :";
	cin >> getal2;
	while (getal1 !=0 || getal2 != 0)
	{
		getal = berekening(getal1, getal2);
		cout << getal << endl;
		getal2 /= 10;
		getal1 /= 10;
	}
	
	return 0;
}
int berekening(int getal1,int getal2)
{
	return getal1 % 10 + getal2 % 10;
}